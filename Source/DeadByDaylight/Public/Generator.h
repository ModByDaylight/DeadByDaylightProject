#pragma once
#include "CoreMinimal.h"
#include "OnIsDamagedChangedEventDelegate.h"
#include "Interactable.h"
#include "AIPointOfInterestTargetInterface.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "GeneratorRepairedEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorRepairedBySurvivorEventDelegate.h"
#include "GameplayTagContainer.h"
#include "DamageData.h"
#include "PlayerFloatTuple.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "AkExternalSourceInfo.h"
#include "ESkillCheckCustomType.h"
#include "Generator.generated.h"

class UCurveLinearColor;
class UCoopRepairTracker;
class AActor;
class UAIPerceptionStimuliSourceComponent;
class UAkAudioEvent;
class ADBDPlayer;
class UObject;
class UChargeableComponent;
class UInteractor;
class USkeletalMeshComponent;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AGenerator : public AInteractable, public IAIPointOfInterestTargetInterface, public INoiseIndicatorEmitterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Activated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRepaired;
    
    UPROPERTY(BlueprintReadOnly)
    bool WasASMCachePreWarmTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlaySkillcheckAesthetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceRevealToLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* KillerOutlineFadeCurve;
    
    UPROPERTY(BlueprintReadOnly)
    float NativePercentComplete;
    
    UPROPERTY(BlueprintAssignable)
    FGeneratorRepairedEvent OnGeneratorRepaired;
    
    UPROPERTY(BlueprintAssignable)
    FGeneratorRepairedBySurvivorEvent OnGeneratorRepairedBySurvivor;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsDamagedChangedEvent OnIsDamagedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FireLevelScoreEventOnFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FTransform> _activatedTopLightsTransformMap;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _repairSemanticTag;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DamageData)
    FDamageData _damageData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsBlocked)
    bool _isBlocked;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _isBlockedFromCharging;
    
    UPROPERTY(Transient)
    TSet<UObject*> _blockingSources;
    
    UPROPERTY(Export, Transient)
    UChargeableComponent* _generatorCharge;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerFloatTuple> _playerStartTimes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool _isAutoCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Replicated, meta=(AllowPrivateAccess=true))
    int32 _overchargeLevel;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    UCoopRepairTracker* _coopRepairTracker;
    
    UPROPERTY(EditDefaultsOnly)
    float _VFX_LightDistanceDefault;
    
public:
    AGenerator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void VFXClampTopActivationSingleLight(float distance, FName parameterName);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerSkillCheckFailureLoudNoise(ADBDPlayer* instigatingPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerSkillCheck(ADBDPlayer* instigatingPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnBloodEffectToSocket(const FName name);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ShouldDoOverchargeSkillcheck() const;
    
    UFUNCTION(BlueprintCallable)
    void SetRepaired(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetOverchargeLevel(const int32 overchargeLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBlockedFromCharging(bool isBlockedFromCharging);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutoCompleted(const bool isAutoCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComplete(bool complete);
    
    UFUNCTION(BlueprintCallable)
    void ResetGenerator();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemovePlayerStartTime(const ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    int32 PostAkEvent(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailSparksFX(ADBDPlayer* interactingPlayer, bool explode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateChargeProgress(float newPercentComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetGenerator();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRepairedBP(const bool showGeneratorCloneLoudNoise);
    
private:
    UFUNCTION()
    void OnRep_IsBlocked();
    
    UFUNCTION()
    void OnRep_DamageData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreWarmASMCache();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEscapeDoorActivated();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDamageCosmetic(bool intense);
    
private:
    UFUNCTION()
    void OnChargeChanged(UChargeableComponent* chargeableComponent, float percent);
    
    UFUNCTION()
    void OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureProbeSecondState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBlockingStatusChanged(const bool NewIsBlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyRepairStart(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyRepairFinish(const ADBDPlayer* player, UInteractor* interactor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayFailSparksFX(ADBDPlayer* player, bool explode);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnRepaired(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted, const int32 updatedRemainingGeneratorCount);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DamageCosmetic(bool intense);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRegressing() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsIntenseDamage() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingRepaired() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsBeingDamagedByKiller() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetRepairPercentComplete() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ADBDPlayer*> GetRepairers() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPlayerFloatTuple> GetPlayerStartTimes() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetPlayerStartTime(const ADBDPlayer* player) const;
    
public:
    UFUNCTION(BlueprintPure)
    ESkillCheckCustomType GetOverchargeSkillCheckToTrigger() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOverchargeLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsBlockedFromCharging();
    
    UFUNCTION(BlueprintPure)
    bool GetIsAutoCompleted() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UChargeableComponent* GetGeneratorChargeComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetChargePercentComplete() const;
    
private:
    UFUNCTION()
    void DisableInaccessibleInteractors();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearGeneratorOvercharge();
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanSurvivorReactToBlockingEntity(const ACamperPlayer* survivor) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastIsDamagedChangedEvent(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BroadcastGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RepairDamage(ADBDPlayer* repairedBy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveBlockingSource(const UObject* source);
    
private:
    UFUNCTION()
    void Authority_OnChargeChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
    UFUNCTION()
    void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool Authority_HasRepairedDamage(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Damage(ADBDPlayer* damagedBy, const float immediateRegressionPercent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddBlockingSource(const UObject* source);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddPlayerStartTime(ADBDPlayer* player, float startTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void ActivateTeleportGeneratorIndicator(bool activate) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

