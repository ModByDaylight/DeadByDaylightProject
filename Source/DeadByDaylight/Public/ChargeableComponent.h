#pragma once
#include "CoreMinimal.h"
#include "ChargeableEmptiedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "ChargeableCompletionStateChangeDelegateDelegate.h"
#include "ChargeableSkillCheckResponseDelegate.h"
#include "ChargeAppliedDelegate.h"
#include "ChargeableCompletionPercentChangeDelegateDelegate.h"
#include "ChargeableCompletionPercentChangeCosmeticDelegateDelegate.h"
#include "DechargeBeginDelegate.h"
#include "DechargeEndDelegate.h"
#include "SpeedBasedNetSyncedValue.h"
#include "DBDTimer.h"
#include "ChargeData.h"
#include "ChargeableComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargeableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChargeableEmptiedDelegate OnInteractionEmptiedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableCompletionStateChangeDelegate OnInteractionCompletionStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableSkillCheckResponse SkillCheckResponseAestheticDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableSkillCheckResponse SkillCheckResponseAuthorityDelegate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FChargeApplied ChargeAppliedAuthorityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableCompletionPercentChangeDelegate ChargeableCompletionPercentChangeAuthorityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableCompletionPercentChangeCosmeticDelegate ChargeableCompletionPercentChangeCosmeticDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FDechargeBegin DechargeBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FDechargeEnd DechargeEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowSkillChecksAtFullCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ChargeableComponentID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DechargeDelay;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_CurrentCharge)
    FSpeedBasedNetSyncedValue _currentCharge;
    
    UPROPERTY(Transient)
    FDBDTimer _skillCheckFailurePenaltyTimer;
    
    UPROPERTY(Transient)
    FDBDTimer _dechargeTimer;
    
    UPROPERTY(Transient)
    TArray<FChargeData> _chargesThisFrame;
    
    UPROPERTY(Transient)
    TArray<AActor*> _instigatorsSinceEmpty;
    
    UPROPERTY(Transient)
    TMap<FName, float> _tunableValueMap;
    
    UPROPERTY(Transient)
    bool _isCharging;
    
    UPROPERTY(Transient)
    TArray<int32> _playersWhoDidSkillCheck;
    
    UPROPERTY(EditAnywhere)
    float _startingChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _dechargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _enableAddCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _enableSkillCheckFailurePenalty;
    
    UPROPERTY(Transient)
    bool _isDecharging;
    
    UPROPERTY(EditAnywhere)
    bool _stopDechargingWhenComplete;
    
public:
    UChargeableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSecondsToCharge(float secondsToCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetDechargeRate(float dechargeRate);
    
private:
    UFUNCTION()
    void OnRep_CurrentCharge();
    
    UFUNCTION()
    void OnCurrentChargeChanged(float value);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnEmptied() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnCompleteChanged(bool completed) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool IsSkillCheckTimePenaltyActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChargeComplete() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxChargeAdditive(float secondsToAdd);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxCharge(float percent);
    
    UFUNCTION(BlueprintPure)
    bool HasPlayerDoneSkillCheck(int32 playerID) const;
    
    UFUNCTION(BlueprintPure)
    float GetTunableValue(FName TunableValueID) const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerCountPenaltyModifier(int32 playerCount) const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentComplete() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxCharge() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentCharge() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeRemaining() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetEnableSkillCheckFailurePenalty(const bool enable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetEnableAddCharge(const bool enable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Reset();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ApplyStartingCharge();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddChargePercent(float chargePercent, AActor* instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddCharge(float chargeAmount, AActor* instigator, bool bypassSkillCheckFail);
    
};

