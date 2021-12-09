#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "SpeedBasedNetSyncedValue.h"
#include "DBDTimer.h"
#include "ChargeData.h"
#include "ChargeableComponent.generated.h"

class AActor;
class ADBDPlayer;
class UChargeableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChargeableComponentOnInteractionEmptiedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargeableComponentDechargeBeginDelegate, UChargeableComponent*, ChargeableComponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FChargeableComponentSkillCheckResponseAestheticDelegate, bool, Success, bool, Bonus, ADBDPlayer*, Player, bool, TriggerLoudNoise, bool, hadInput, ESkillCheckCustomType, type, float, ChargeChange);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FChargeableComponentSkillCheckResponseAuthorityDelegate, bool, Success, bool, Bonus, ADBDPlayer*, Player, bool, TriggerLoudNoise, bool, hadInput, ESkillCheckCustomType, type, float, ChargeChange);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChargeableComponentOnInteractionCompletionStateChanged, bool, completed, const TArray<AActor*>&, instigatorsForCompletion);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FChargeableComponentChargeAppliedAuthorityDelegate, float, IndividualChargeAmount, float, TotalChargeAmount, AActor*, ChargeInstigator, bool, WasCoop, float, DeltaTime);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate, UChargeableComponent*, ChargeableComponent, float, TotalPercentComplete);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate, UChargeableComponent*, ChargeableComponent, float, PercentCompletionChange, float, TotalPercentComplete);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargeableComponentDechargeEndDelegate, UChargeableComponent*, ChargeableComponent);

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UChargeableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentOnInteractionEmptiedEvent OnInteractionEmptiedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentOnInteractionCompletionStateChanged OnInteractionCompletionStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentSkillCheckResponseAestheticDelegate SkillCheckResponseAestheticDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentSkillCheckResponseAuthorityDelegate SkillCheckResponseAuthorityDelegate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FChargeableComponentChargeAppliedAuthorityDelegate ChargeAppliedAuthorityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate ChargeableCompletionPercentChangeAuthorityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate ChargeableCompletionPercentChangeCosmeticDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentDechargeBeginDelegate DechargeBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableComponentDechargeEndDelegate DechargeEndDelegate;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UChargeableComponent();
};

