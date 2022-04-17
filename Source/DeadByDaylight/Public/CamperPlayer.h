#pragma once
#include "CoreMinimal.h"
#include "OnHPSlotChangedDelegate.h"
#include "DBDPlayer.h"
#include "CharmAttachable.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "OnHookStateChangedDelegate.h"
#include "OnGuidedStateChangedDelegate.h"
#include "OnPickedUpEventDelegate.h"
#include "OnImmobilizeStateChangedDelegate.h"
#include "OnHookEscapeFailedCosmeticDelegate.h"
#include "EGender.h"
#include "DBDTimer.h"
#include "UObject/NoExportTypes.h"
#include "ECamperImmobilizeState.h"
#include "ECamperGuidedAction.h"
#include "Engine/EngineTypes.h"
#include "ESkillCheckCustomType.h"
#include "EAuthoritativeMovementFlag.h"
#include "UObject/NoExportTypes.h"
#include "EEscapeType.h"
#include "CamperPlayer.generated.h"

class USurvivorHitSprintEffect;
class UCharmSpawnerComponent;
class UAkAudioEvent;
class UDBDClipRegionComponent;
class UMoveComponentToComponent;
class UInteractionDefinition;
class UDBDCamperData;
class UCharacterPositionRecorderComponent;
class AActor;
class UStalkedComponent;
class UScreamComponent;
class UCamperBloodTrailComponent;
class UCurveFloat;
class UCamperStillnessTrackerComponent;
class AReverseBearTrap;
class USpherePlayerOverlapComponent;
class UCapsuleComponent;
class UHookableComponent;
class UCamperSlashableComponent;
class APawn;
class UAkComponent;
class UTerrorRadiusReceiverComponent;
class UDBDPawnSensingComponent;
class USurviveTimerScoreEventComponent;
class UCamperHealthComponent;
class UChargeableComponent;
class UBloodTrailSettings;
class UKillerInstinctComponent;
class UCameraAttachmentComponent;
class UProtectionHitComponent;
class ACamperPlayer;
class UCamperEndGameComponent;
class UCamperAnimInstance;
class UPrimitiveComponent;
class UAnimationMontageSlave;
class UChaseeCharacterComponent;

UCLASS()
class DEADBYDAYLIGHT_API ACamperPlayer : public ADBDPlayer, public ICharmAttachable, public INoiseIndicatorEmitterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnHookStateChanged OnHookedStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnGuidedStateChanged OnGuidedStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPickedUpEvent OnPickedUpDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPickedUpEvent OnPickedUpEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHPSlotChanged OnHPSlotChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnImmobilizeStateChanged OnImmobilizeStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnHookEscapeFailedCosmetic OnHookEscapeFailedCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputMashCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputMashDecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ReverseBearTrapAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isBeingDissolved;
    
    UPROPERTY(EditAnywhere)
    float FootprintAudibleRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UStalkedComponent* StalkedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraResetToleranceYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraResetTolerancePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraRecenterOffsetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraRecenterOffsetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DropStaggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DropStaggerMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeforDeathWhileCrawling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeforDeathWhileHooked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsUntilFootprintTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TriggerAfflictionHUDIntro;
    
protected:
    UPROPERTY(Export, Transient, VisibleInstanceOnly)
    UCamperStillnessTrackerComponent* _stillnessTracker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PartiallyHiddenStillnessThreshold;
    
    UPROPERTY(Transient)
    AActor* _escape;
    
    UPROPERTY(Transient)
    AActor* _overlappingEscape;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpherePlayerOverlapComponent* ProximityZone;
    
    UPROPERTY(Transient)
    FDBDTimer _dropStaggerTimer;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* SlashableZone;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* HookSlashableZone;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCamperSlashableComponent* _camperSlashable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTerrorRadiusReceiverComponent* _terrorRadiusReceiverComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float CrouchCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float IKOffsetRightFoot;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float IKOffsetLeftFoot;
    
private:
    UPROPERTY(Export, Transient)
    UDBDPawnSensingComponent* _camperSensor;
    
    UPROPERTY(Export, Transient)
    USurviveTimerScoreEventComponent* _surviveTimerScoreComponent;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _foundCampers;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _potentialSaviors;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCamperHealthComponent* _healthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _hpSlot01;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _hpSlot02;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _mendChargeable;
    
    UPROPERTY(EditAnywhere)
    UBloodTrailSettings* _bloodTrailSettings;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCamperBloodTrailComponent* _bloodTrailComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UKillerInstinctComponent* _killerInstinctComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAttachmentComponent* _cameraAttachment;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharmSpawnerComponent* _charmSpawnerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UHookableComponent* _hookableComponent;
    
    UPROPERTY(Export, Transient)
    UProtectionHitComponent* _protectionHitComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UScreamComponent* _screamComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterPositionRecorderComponent* _positionRecorder;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RunInputPressed)
    bool _runInputPressed;
    
    UPROPERTY(Transient)
    bool _trapIndicatorActive;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ACamperPlayer> _revealedSurvivor;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCamperEndGameComponent* _camperEndGameComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAkComponent* _noOcclusionAkComponent;
    
    UPROPERTY(Transient)
    bool _isHealingKOCamper;
    
    UPROPERTY(Transient)
    bool _isSkillCheckFailed;
    
    UPROPERTY(Transient)
    bool _isBeingSacrificed;
    
    UPROPERTY(Transient)
    bool _isWiggleProgressionAllowed;
    
    UPROPERTY(Export, Transient)
    UMoveComponentToComponent* _meshMover;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_SprintEffect)
    USurvivorHitSprintEffect* _sprintEffect;
    
public:
    ACamperPlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateKillerDistanceEvent(float deltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHealingTimer(float deltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerPutDownAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerPickUpAnimation();
    
    UFUNCTION(BlueprintCallable)
    void TriggerAfflictionHUDFeedback();
    
    UFUNCTION(BlueprintCallable)
    void StopHealingTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartHealingTimer(float time);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetVignetteVisible(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetRevealedSurvivor(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void SetPlayerExposedVFX();
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkillCheckFailed(bool isSkillCheckFailed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHealingKOCamper(bool isHealingKOCamper);
    
    UFUNCTION(BlueprintCallable)
    void SetImmobilized(ECamperImmobilizeState state);
    
    UFUNCTION(BlueprintCallable)
    void SetGuidedActionLocal(ECamperGuidedAction action);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGuidedAction(ECamperGuidedAction action);
    
    UFUNCTION(BlueprintCallable)
    void SetBeingCarried(bool NewIsBeingCarried, ADBDPlayer* carrier);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoInteractionMashEnabled(bool enabled);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetRunInput(bool pressed);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetOverlappingEscape(AActor* NewEscape);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetImmobilized(ECamperImmobilizeState state);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendLeftRightMashedInput(bool pressed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendInteractMashedInput(bool pressed);
    
    UFUNCTION(BlueprintCallable)
    void RunLocked(bool lock);
    
    UFUNCTION(BlueprintCallable)
    void ResetPotentialSaviors();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraAttach();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveReverseBearTrap();
    
    UFUNCTION(BlueprintCallable)
    void OnUnhooked();
    
private:
    UFUNCTION()
    void OnRep_SprintEffect();
    
    UFUNCTION()
    void OnRep_RunInputPressed();
    
    UFUNCTION()
    void OnProximityEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayScream(UAkAudioEvent* audioEvent, bool fireSoundEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPickUpEnter(ADBDPlayer* picker, float transitionTime);
    
    UFUNCTION(BlueprintCallable)
    void OnPickUpDenied();
    
private:
    UFUNCTION()
    void OnPawnSensed(APawn* pawn);
    
public:
    UFUNCTION()
    void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);
    
    UFUNCTION(BlueprintCallable)
    void OnHpSlotSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookedStateChangedCosmetic();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHooked();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedPlaying();
    
    UFUNCTION(BlueprintCallable)
    void OnDroppedStart();
    
    UFUNCTION(BlueprintCallable)
    void OnDroppedEnd(bool clearLeader);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppedByBearTrap();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetOverlappingEscape(AActor* NewEscape);
    
protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetImmobilized(ECamperImmobilizeState state);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetHookEscapeAutoFail(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetGuidedAction(ECamperGuidedAction action);
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flag, bool value);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_RemoveReverseBearTrap();
    
    UFUNCTION(BlueprintCallable)
    void MoveToOwnerCarryJoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeCamperDisappearBleedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeCamperDisappear();
    
    UFUNCTION(BlueprintCallable)
    void Local_SetImmobilized(ECamperImmobilizeState state);
    
    UFUNCTION(BlueprintCallable)
    void Kill(bool sacrificed, bool left);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsVaulting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnintentionallyImmobilized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnhookingSelf() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTrapped() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSacrificed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRunLocked();
    
    UFUNCTION(BlueprintPure)
    bool IsObsessionTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMovementGuided() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInNeed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInDeathBed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsImmobilized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHooked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHealingTimerExpired() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGuidedBySlasher() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEscaped() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDeadOrInParadise() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrawling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingUnhooked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingPutOnHook() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingPutDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingPulledFromCloset() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingPickedUp() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingMended() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingKilled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingInteractedWith() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingHealed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingEndGameSacrificed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingCarried() const;
    
    UFUNCTION(BlueprintCallable)
    void Input_Wiggle(float input);
    
    UFUNCTION(BlueprintCallable)
    void Input_ToggleRun();
    
    UFUNCTION(BlueprintCallable)
    void HatchEscapeZoneEntered(AActor* NewEscape);
    
    UFUNCTION(BlueprintPure)
    bool HasReverseBearTrap() const;
    
    UFUNCTION(BlueprintPure)
    bool HasHitEvents() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGuidedAction() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UChargeableComponent* GetWiggleChargeable() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetToAimPointRotation() const;
    
    UFUNCTION(BlueprintPure)
    UTerrorRadiusReceiverComponent* GetTerrorRadiusReceiverComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetStillness() const;
    
    UFUNCTION(BlueprintPure)
    UScreamComponent* GetScreamComponent() const;
    
    UFUNCTION(BlueprintPure)
    AReverseBearTrap* GetReverseBearTrap() const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetRevealedSurvivor() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentHealingTimer() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOverlappingEscape() const;
    
    UFUNCTION(BlueprintPure)
    float GetObsessionTargetWeight() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfEntityRenderRegions() const;
    
    UFUNCTION(BlueprintPure)
    UAkComponent* GetNoOcclusionAudioComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAnimationMontageSlave* GetMontageFollower();
    
    UFUNCTION(BlueprintPure)
    UMoveComponentToComponent* GetMeshMover() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxGruntDistance(bool isLocalPlayerKiller) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSkillCheckFailed();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsHealingKOCamper();
    
    UFUNCTION(BlueprintPure)
    bool GetIsBeingDissolved() const;
    
    UFUNCTION(BlueprintPure)
    ECamperImmobilizeState GetImmobilizedState() const;
    
    UFUNCTION(BlueprintPure)
    UHookableComponent* GetHookableComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCamperHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintPure)
    ECamperGuidedAction GetGuidedAction() const;
    
    UFUNCTION(BlueprintPure)
    UDBDClipRegionComponent* GetEntityRenderRegionAtIndex(int32 InIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetDropStaggerTimeLeft() const;
    
    UFUNCTION(BlueprintPure)
    float GetDropStaggerPercentTimeElapsed() const;
    
    UFUNCTION(BlueprintPure)
    UChaseeCharacterComponent* GetChaseeCharacterComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UCamperStillnessTrackerComponent* GetCamperStillnessComponent();
    
    UFUNCTION(BlueprintPure)
    UDBDCamperData* GetCamperData() const;
    
    UFUNCTION(BlueprintPure)
    UCamperAnimInstance* GetCamperAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    UCameraAttachmentComponent* GetCameraAttachmentComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCamperBloodTrailComponent* GetBloodTrailComponent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UDBDClipRegionComponent*> GetAllEntityRenderRegions() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAimPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnDeath();
    
    UFUNCTION(BlueprintCallable)
    void EscapeTutorial();
    
    UFUNCTION(BlueprintCallable)
    void Escape(AActor* NewEscape, EEscapeType escapeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoSacrificialDissolve();
    
    UFUNCTION(BlueprintCallable)
    void DetachFromGuidingPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecalBlood_Puddles();
    
    UFUNCTION(BlueprintImplementableEvent, Exec)
    void DBD_SetSurvivorCameraArmLength(float cameraArmLength);
    
    UFUNCTION(Exec)
    void DBD_SetImmobilized(ECamperImmobilizeState state);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_LeaveParadise();
    
    UFUNCTION(Exec)
    void DBD_ForceRun(bool forced);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_CheatEscaped();
    
    UFUNCTION(Exec)
    void DBD_AutoLeftRightMash(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_AutoInteractionMash(bool enabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float ComputeInteractionSuccessPercentage(const UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ComputeHookEscapeResult();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ComputeBeartrapEscapeResult();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_OnSlashedOutOfTrap(ADBDPlayer* requester);
    
    UFUNCTION(BlueprintPure)
    bool CanRushQuietly() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeShocked() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBePickedUp() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeKilled() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOnDroppedByBearTrap();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnSlashed(ADBDPlayer* attacker);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_DropItemAtLastSafePosition();
    
    UFUNCTION(BlueprintCallable)
    void AttachToGuidingPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBloodDropsToRightHand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBloodDropsToLeftHand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBloodDrippingToGK_Mori();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBloodDecalToGK_Mori();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ActivatePlayerExposedVFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ActivateLocalPlayerExposedVFX();
    
    UFUNCTION(BlueprintCallable)
    void ActionInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void ActionInputPressed();
    
    
    // Fix for true pure virtual functions not being implemented
};

