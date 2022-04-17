#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "OnHealedEventDelegate.h"
#include "InjuredBleedoutDelegateDelegate.h"
#include "OnDamageStateChangedDelegate.h"
#include "DBDTunableRowHandle.h"
#include "DBDTimer.h"
#include "CamperHealResult.h"
#include "ECamperImmobilizeState.h"
#include "ECamperDamageState.h"
#include "CamperHealthComponent.generated.h"

class ADBDPlayer;
class AActor;
class UInteractionDefinition;
class UChargeableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDamageStateChangedCosmetic);
    
    UPROPERTY(BlueprintAssignable)
    FOnHealedEvent OnHealedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInjuredBleedoutDelegate OnInjuredBleedoutStarted;
    
    UPROPERTY(BlueprintAssignable)
    FInjuredBleedoutDelegate OnInjuredBleedoutEnded;
    
    UPROPERTY(BlueprintAssignable)
    FInjuredBleedoutDelegate OnInjuredBleedoutKO;
    
    UPROPERTY(BlueprintAssignable)
    FOnDamageStateChanged OnDamageStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDamageStateChangedCosmetic OnDamageStateChangedCosmetic;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _bleedoutBaseDuration;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InInjuredBleedOut)
    FTagStateBool _inInjuredBleedOut;
    
    UPROPERTY(Replicated, Transient)
    FDBDTimer _bleedOutTimer;
    
    UPROPERTY(Transient)
    bool _canBleedout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UInteractionDefinition>> _pauseInjuredBleedoutTimerInteractions;
    
    UPROPERTY(Transient)
    int32 _currentHealthStateCount;
    
    UPROPERTY(Replicated, Transient)
    int32 _numHealthyHeals;
    
    UPROPERTY(Replicated, Transient)
    FDBDTimer _dyingTimer;
    
    UPROPERTY(Export)
    UChargeableComponent* _healFromDyingChargeable;
    
    UPROPERTY(Export)
    UChargeableComponent* _healFromInjuredChargeable;
    
    UPROPERTY(Export)
    UChargeableComponent* _mendChargeable;
    
    UPROPERTY(Transient)
    ADBDPlayer* _injuredBleedoutInstigator;
    
public:
    UCamperHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetCanBleedout(bool canBleedout);
    
private:
    UFUNCTION()
    void OnRep_InInjuredBleedOut();
    
protected:
    UFUNCTION()
    void OnMendChargeCompletionStateChanged(bool complete, const TArray<AActor*>& instigators);
    
private:
    UFUNCTION()
    void OnImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);
    
public:
    UFUNCTION()
    void OnHealthBarCharged(bool complete, const TArray<AActor*>& instigators);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetHealthStateFromDamageState(ECamperDamageState damageState, bool fireScoreEvent);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetDead(bool NewIsDead, bool isSacrificed, bool isLeaving);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetDamageState(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCurrentHealthStateCount(int32 newHealth, bool fireScoreEvent);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnInjuredBleedoutKO(ADBDPlayer* injuredBleedoutInstigator);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnHealed(const FCamperHealResult& healResult);
    
    UFUNCTION(BlueprintPure)
    bool IsKO() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInjuredBleedoutTimerExpired() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInjured() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInInjuredBleedout() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHealthy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDyingTimerExpired() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseHPSlotSize(float percent);
    
    UFUNCTION(BlueprintPure)
    float GetPercentInjuredBleedoutTimer() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentDyingTimer() const;
    
    UFUNCTION(BlueprintPure)
    ECamperDamageState GetDamageState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTotalHealthBarPercent() const;
    
    UFUNCTION(BlueprintPure)
    UChargeableComponent* GetCurrentHPSlot();
    
    UFUNCTION(BlueprintPure)
    bool CanHealSelf() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeHealedFromInjured() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeHealed() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBecomeHealthy() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetDamageState(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed);
    
protected:
    UFUNCTION()
    void Authority_MendTryGrantScoresOnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
    UFUNCTION()
    void Authority_HealTryGrantScoresOnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EndInjuredBleedout();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ApplyDoubleDamage(AActor* damageSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ApplyDeepWound(AActor* damageSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ApplyDamage(AActor* damageSource);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHeal(int32 healAmount, const TArray<ADBDPlayer*>& healers);
    
};

