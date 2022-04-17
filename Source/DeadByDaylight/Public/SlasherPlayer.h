#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDPlayer.h"
#include "EKillerMoodInfluence.h"
#include "KillerControls.h"
#include "EAttackZoneSet.h"
#include "OffensiveActionDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EKillerAbilities.h"
#include "TargetFocusTimer.h"
#include "GameplayTagContainer.h"
#include "DBDTimer.h"
#include "AnimationMontageDescriptor.h"
#include "EStunType.h"
#include "TagStateBool.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EAttackType.h"
#include "ESlasherGuidedAction.h"
#include "UObject/NoExportTypes.h"
#include "SlasherPlayer.generated.h"

class ACamperExposerInstance;
class UKillerSoundCuesComponent;
class UAkComponent;
class UDBDNavModifierComponent;
class UKillerBloodFXComponent;
class UStillnessTrackerComponent;
class UAimAssistComponent;
class UFirstPersonViewComponent;
class USlasherTREmitterComponent;
class ULoudNoiseHUDIndicator;
class USlasherHitsWhileCarryingTrackerComponent;
class UKillerRedStainUpdateStrategy;
class ACamperPlayer;
class UMoriComponent;
class UHitValidatorComponent;
class UHitValidatorConfigurator;
class UDBDAttackerComponent;
class UKillerIntroComponent;
class UArmIKSensorComponent;
class UKillerBlindingFXComponent;
class USceneComponent;
class USlasherStunnableComponent;
class AActor;
class UChaserCharacterComponent;

UCLASS()
class DEADBYDAYLIGHT_API ASlasherPlayer : public ADBDPlayer, public IKillerControls {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStalkModeChangedEvent, bool, isInStalkMode);
    
    UPROPERTY(BlueprintAssignable)
    FOffensiveActionDelegate OnOffensiveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PutDownTraceLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DefaultSlasherPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LoudNoiseDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetPriorityFactor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShouldDisplayAttackZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ACamperExposerInstance> CamperExposer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKillerMoodInfluence KillerMoodInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EKillerAbilities> KillerAbilities;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UKillerSoundCuesComponent* KillerSoundCuesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowKillerPowerDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasDamagedGeneratorSinceHook;
    
    UPROPERTY(BlueprintAssignable)
    FOnStalkModeChangedEvent OnStalkModeChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UAkComponent> _audioComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDBDNavModifierComponent* _terrorNavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UKillerBloodFXComponent* _bloodFXComponent;
    
    UPROPERTY(Transient)
    float _slasherLightIntensity;
    
    UPROPERTY(EditDefaultsOnly)
    float _defaultAmountToSquish;
    
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, FTargetFocusTimer> _stalkTimers;
    
    UPROPERTY(Export, Transient, VisibleInstanceOnly)
    UStillnessTrackerComponent* _stillnessTracker;
    
    UPROPERTY(Export, Transient)
    UAimAssistComponent* _aimAssistComponent;
    
    UPROPERTY(Transient)
    FDBDTimer _recentlyCloakedTimer;
    
    UPROPERTY(Transient)
    FDBDTimer _flashlightBlindEvasionScoreTimer;
    
    UPROPERTY(Transient)
    FDBDTimer _flashlightBurnoutEvasionScoreTimer;
    
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, FAnimationMontageDescriptor> _predictedCamperHitMontages;
    
private:
    UPROPERTY(Export, Transient)
    USlasherTREmitterComponent* _terrorRadiusEmitter;
    
    UPROPERTY(Export, Transient)
    ULoudNoiseHUDIndicator* _loudNoiseIndicator;
    
    UPROPERTY(Export, Transient)
    USlasherHitsWhileCarryingTrackerComponent* _hitsWhileCarryingTracker;
    
    UPROPERTY(Transient)
    float _stealthIncreaseRate;
    
    UPROPERTY(Transient)
    float _stealthDecreaseRate;
    
    UPROPERTY(Transient)
    FDateTime _stillnessStartTime;
    
    UPROPERTY(Replicated)
    FTagStateBool _isInStalkMode;
    
    UPROPERTY()
    bool _isKilling;
    
    UPROPERTY(Replicated, Transient)
    int8 _allowedKillCount;
    
    UPROPERTY(Replicated, Transient)
    int8 _allowedKillAfterStrugglePhase;
    
    UPROPERTY(Replicated, Transient)
    bool _allowedKillLastSurvivor;
    
    UPROPERTY(Replicated, Transient)
    int32 _cachedBloodlustTier;
    
    UPROPERTY(Replicated, Transient)
    uint32 _killerPowerDebugFlags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _presenceTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _persistantStateTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _animGameplayTags;
    
    UPROPERTY(EditAnywhere)
    bool _enableKillerCrouchInput;
    
    UPROPERTY(EditAnywhere)
    bool _canStartAttackWhileCrouched;
    
    UPROPERTY(Transient)
    ACamperPlayer* _carriedCamper;
    
    UPROPERTY(Export, VisibleAnywhere)
    UMoriComponent* _moriComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UHitValidatorComponent* _hitValidator;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHitValidatorConfigurator* _hitValidationConfigurator;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDBDAttackerComponent* _attackerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    EAttackType _basicAttackType;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UArmIKSensorComponent* _armIKSensorComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ACamperPlayer* _survivorBeingKilled;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UFirstPersonViewComponent* _firstPersonViewComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UKillerIntroComponent* _killerIntroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKillerBlindingFXComponent* _blindingFXComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UKillerRedStainUpdateStrategy* _redStainUpdateStrategy;
    
    UPROPERTY(EditAnywhere)
    FName _squishFactorParameter;
    
    UPROPERTY(Export)
    USceneComponent* _attackZonePivot;
    
    UPROPERTY(Export, Transient)
    USlasherStunnableComponent* _slasherStunnableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float _turnInPlaceThresholdAngle;
    
public:
    ASlasherPlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool WasRecentlyCloaked() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void UpdateRageTierEffect(int32 previousTier, int32 currentTier);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerPutDownAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerPickUpAnimation();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void SpawnSlasherPower();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShouldTurnInPlaceRight();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldTurnInPlaceLeft();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldTurnInPlace();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldApplyBloodlustSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivorBeingKilled(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCallable)
    void SetStalkTierWalkSpeedMultiplier(float stalkTierWalkSpeedMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetLightIntensity(float intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIsKilling(bool NewIsKilling);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHookingSurvivor(const bool value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGuidedAction(ESlasherGuidedAction action);
    
    UFUNCTION(BlueprintCallable)
    void SetChainsawSprinting(bool chainsawSprinting);
    
    UFUNCTION(BlueprintCallable)
    void SetCarriedCamper(ACamperPlayer* camper);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackZonePivot(USceneComponent* attackZonePivot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAttackInput(bool pressed);
    
    UFUNCTION(BlueprintCallable)
    void ResetNeutralIdleRotationYaw();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PlayBloodHitsEffects();
    
private:
    UFUNCTION()
    void OnSurvivorsLeftChanged(int32 survivorRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSurvivorKilled(ACamperPlayer* playerToKill, bool consumeKill);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSuccessfulInterruption(ACamperPlayer* interruptedSurvivor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStealthChanged(bool stealth);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnStalkModeChangedCosmetic(bool stalkMode);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStalkModeChanged(bool stalkMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerformingChargableInteraction(float Progress);
    
private:
    UFUNCTION()
    void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction);
    
    UFUNCTION()
    void OnLoudNoiseIndicatorDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillerAbilityUpdateActivate(EKillerAbilities killerAbility, float percent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillerAbilityEndDeactivate(EKillerAbilities killerAbility, bool forced);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillerAbilityEndActivate(EKillerAbilities killerAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillerAbilityBeginDeactivate(EKillerAbilities killerAbility, bool forced);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillerAbilityBeginActivate(EKillerAbilities killerAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnDropCamperEnd(ADBDPlayer* camper);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCamperHit(ACamperPlayer* camper);
    
private:
    UFUNCTION()
    void OnAttackStart(const EAttackType attackType);
    
    UFUNCTION()
    void OnAttackFinish(const EAttackType attackType);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetGuidedAction(ESlasherGuidedAction action);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_MergeLockOnDamageZones(bool enable);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DisplayAttackZones(bool display);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MergeLockOnDamageZones(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Local_CancelAttack();
    
    UFUNCTION(BlueprintPure)
    bool IsWalkLocked();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsUncloaking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOfferingAllowingKill(const ACamperPlayer* camper) const;
    
    UFUNCTION(BlueprintPure)
    bool IsKilling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInterruptBlocked() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsImmuneToObservingPlayerDetection(const ADBDPlayer* observingPlayer) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsIdling();
    
    UFUNCTION(BlueprintPure)
    bool IsHooking() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsCrouchAvailable_BP();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsCloaking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChainsawSprinting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCarrying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsASurvivorInTerrorRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllowedToKill(const ACamperPlayer* camper) const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementInterruptBlock();
    
    UFUNCTION(BlueprintPure)
    bool HasPreLevelGenerationModifier(FName modifierID) const;
    
    UFUNCTION(BlueprintPure)
    bool HasKillerAbility(EKillerAbilities killerAbility) const;
    
    UFUNCTION(BlueprintPure)
    USlasherTREmitterComponent* GetTerrorRadiusEmitter() const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetSurvivorBeingKilled() const;
    
    UFUNCTION(BlueprintPure)
    FDateTime GetStillnessStartTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetStalkTierWalkSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetSlasherAnimGameplayTags() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRageTier() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetPresenceTag() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetPlayerDropOffPoint() const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetObsessionTarget() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLightIntensity() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsAttacking() const;
    
    UFUNCTION(BlueprintCallable)
    float GetIdleNeutralRotationYaw();
    
    UFUNCTION(BlueprintPure)
    ESlasherGuidedAction GetGuidedAction() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDifferenceBetweenIdleNeutralAndCurrentRotationYaw();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentRotationYaw();
    
    UFUNCTION(BlueprintPure)
    UChaserCharacterComponent* GetChaserCharacterComponent() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FName> GetCharacterCustomAnimTags() const;
    
public:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetCarriedCamper() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlindedPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayAttackZones(bool display);
    
    UFUNCTION(BlueprintCallable)
    void DecrementInterruptBlock();
    
    UFUNCTION(Exec)
    void DBD_SetAttackZones(EAttackZoneSet attackZoneSet);
    
    UFUNCTION(Exec)
    void DBD_MergeLockOnDamageZones(bool enable);
    
    UFUNCTION(Exec)
    void DBD_DisplayAttackZones(bool display);
    
    UFUNCTION(Exec)
    void DBD_AllowKilling();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnPickUpEnd();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnDropCamperEnd();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnCancelCarry();
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_RequestStun(EStunType stunType, ADBDPlayer* stunner);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanSlashAttack_BP() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPickupSurvivor() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanPerformKillerAbility(EKillerAbilities killerAbility) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanGainRage() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEscapeCarry(ACamperPlayer* player) const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelAttackByInput();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanAttack_BP(const EAttackType attackType) const;
    
    UFUNCTION(BlueprintPure)
    bool CanAttack(const EAttackType attackType) const;
    
    UFUNCTION(BlueprintPure)
    bool CanAffectLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnInstantTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BroadcastOffensiveAction() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetInStalkMode(bool stalkMode, bool forced);
    
    UFUNCTION(BlueprintCallable)
    void Authority_HandleKillerInterruptingSurvivor(ADBDPlayer* target);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AttemptEscapeCarry(ACamperPlayer* player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AllowKilling(int32 numKills);
    
    UFUNCTION(BlueprintCallable)
    void AttackInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void AttackInputPressed();
    
    UFUNCTION(BlueprintCallable)
    void ActionKillerReleased();
    
    UFUNCTION(BlueprintCallable)
    void ActionKillerPressed();
    
    
    // Fix for true pure virtual functions not being implemented
};

