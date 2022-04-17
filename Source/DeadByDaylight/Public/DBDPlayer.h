#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PerkManagerOwnerInterface.h"
#include "EPlayerTeam.h"
#include "DBDBasePlayer.h"
#include "PerkOwnerInterface.h"
#include "AnimNotifyDelegate_PickupDelegate.h"
#include "AnimTagProvider.h"
#include "ObjectStateProvider.h"
#include "GenericTeamAgentInterface.h"
#include "Perception/AISightTargetInterface.h"
#include "OnAttackedEventDelegate.h"
#include "DynamicGrassEffectorInterface.h"
#include "PushableInterface.h"
#include "UObject/NoExportTypes.h"
#include "DamageTargetDelegateDelegate.h"
#include "OnSensedDelegateDelegate.h"
#include "AnimNotifyDelegate_ReleaseDelegate.h"
#include "SecondaryActionInputDelegateDelegate.h"
#include "OnFirstPersonModeChangedDelegate.h"
#include "OnDreamworldComponentSetDelegate.h"
#include "OnForwardInputLockedChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnRunningAndMovingChangedDelegate.h"
#include "OnLocallyObservedChangedForPlayerDelegate.h"
#include "ECamperState.h"
#include "EAttackSubstate.h"
#include "EffectCameraTypeSettings.h"
#include "ScoreEventData.h"
#include "EDetectionZone.h"
#include "EInputInteractionType.h"
#include "EDBDScoreTypes.h"
#include "EAnimNotifyType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EInteractionAnimation.h"
#include "EAuthoritativeMovementFlag.h"
#include "CharmIdSlot.h"
#include "GameplayTagContainer.h"
#include "AnimationMontageDescriptor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPlayerRole.h"
#include "EPawnType.h"
#include "MontagePlaybackDefinition.h"
#include "InteractionPlayerProperties.h"
#include "Components/SkinnedMeshComponent.h"
#include "AnimData.h"
#include "EStunType.h"
#include "DBDPlayer.generated.h"

class UStateMachine;
class UBoxComponent;
class UCharacterSightableComponent;
class ADBDPlayer;
class UMaterialHelper;
class UAnimInstance;
class UGameplayTagContainerComponent;
class UAxisFlickMasher;
class UDBDPlayerData;
class UCurveFloat;
class USpringArmComponent;
class AActor;
class UCharacterChaseVisualComponent;
class AInteractable;
class UCameraComponent;
class APlayerInteractable;
class UChargeableComponent;
class UCharacterInventoryComponent;
class UBoxOcclusionQueryComponent;
class UInteractionDefinition;
class UActivatorComponent;
class UPlayerPerspectiveComponent;
class USoundCue;
class UPrimitiveComponent;
class UPlayerInteractionHandler;
class UAudioFXComponent;
class UMontagePlayer;
class UPerkManager;
class UAIPerceptionStimuliSourceComponent;
class UCharacterDreamworldComponent;
class UCameraHandlerComponent;
class UReversibleActionSystemComponent;
class UZoneDetectorComponent;
class USceneComponent;
class UBlindableComponent;
class UPollableEventListener;
class UCharacterSightComponent;
class UChaseComponent;
class UAuthoritativeMovementComponent;
class UInteractionDetectorComponent;
class UPrimitivesRegistererComponent;
class UClippableProviderComponent;
class UDynamicCapsuleResizerComponent;
class UPlayerGameRelevancyComponent;
class UContextualQuestComponent;
class UActorComponent;
class UChargeableProgressProviderComponent;
class ADBDPlayerState;
class UOtherCharactersVerticalCollisionsHandler;
class ACollectable;
class UStatusEffect;
class UAnimMontage;
class AController;
class ADBDPlayerController;
class UItemModifier;
class UItemAddon;
class UCustomizedSkeletalMesh;
class ADBDPlayerCameraManager;
class APlayerState;
class ACharacter;
class UGameplayModifierContainer;
class UInteractor;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API ADBDPlayer : public ADBDBasePlayer, public IPerkOwnerInterface, public IPerkManagerOwnerInterface, public IAnimTagProvider, public IObjectStateProvider, public IGenericTeamAgentInterface, public IAISightTargetInterface, public IPushableInterface, public IDynamicGrassEffectorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsCrouchedChanged, bool, isCrouched);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowInterrupting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFallHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInterruptable;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool AllowNavigationInput;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool AllowNavigationBackwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowTurningInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowPitchInput;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool AllowStrafeInput;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInInteractionUpdate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInteractionChargeCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchLimitLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchLimitUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StrafingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PelvisHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PelvisHeightForPounceOnStandingCamper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PelvisHeightForPounceOnCrouchingCamper;
    
    UPROPERTY(BlueprintAssignable)
    FOnAttackedEvent Authority_OnAttackedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FDamageTargetDelegate OnDamageTargetDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSensedDelegate OnSensed;
    
    UPROPERTY(BlueprintAssignable)
    FAnimNotifyDelegate_Pickup OnAnimNotify_Pickup;
    
    UPROPERTY(BlueprintAssignable)
    FAnimNotifyDelegate_Release OnAnimNotify_Release;
    
    UPROPERTY(BlueprintAssignable)
    FSecondaryActionInputDelegate Authority_OnSecondaryActionInput;
    
    UPROPERTY(BlueprintAssignable)
    FOnFirstPersonModeChanged OnFirstPersonModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDreamworldComponentSet OnDreamworldComponentSet;
    
    UPROPERTY()
    FOnForwardInputLockedChanged OnForwardInputLockedChanged;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceSkillChecks;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FTransform IKLeftHandTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FTransform IKRightHandTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AverageSpeedBufferTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlmostCurrentSpeedBufferTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* GamepadYawCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* GamepadPitchCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* GamepadSettingToYawRateCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* GamepadSettingToPitchRateCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* JoyconSettingToYawRateCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* JoyconSettingToPitchRateCurve;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsCrouchedChanged OnIsCrouchedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnRunningAndMovingChanged OnRunningAndMovingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnLocallyObservedChangedForPlayer OnLocallyObservedChangedForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UMaterialHelper* MaterialHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APlayerInteractable> Interactable;
    
protected:
    UPROPERTY(Export, Transient)
    UCharacterInventoryComponent* _characterInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CarryJointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _pitchOffsetForInteractionPriority;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxOcclusionQueryComponent* _renderedPixelCounter;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* _standingOcclusionBox;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* _crouchingOcclusionBox;
    
    UPROPERTY(Export, VisibleAnywhere)
    UActivatorComponent* _activator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInteracting;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _aiCanBeSeenTestCrouchScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _aiCanBeSeenTestRightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _aiCanBeSeenTestHighOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _aiCanBeSeenTestLowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ClearPathTestRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ClearPathTestHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LocationClearTestRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LocationClearTestHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ClearPathTestStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MouseTurnSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MouseLookUpSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    USoundCue* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECamperState CurrentCamperState;
    
    UPROPERTY(EditDefaultsOnly)
    FName CollectableAttachPoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStateMachine* _stateMachine;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerInteractionHandler* _interactionHandler;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMontagePlayer* _montagePlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPerkManager* _perkManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDBDPlayerData* _playerData;
    
    UPROPERTY(Export, Transient, VisibleDefaultsOnly)
    UAxisFlickMasher* _wiggleAxisFlickMasher;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Interactable)
    APlayerInteractable* _interactable;
    
    UPROPERTY(Transient)
    ADBDPlayer* _guidingPlayer;
    
    UPROPERTY(Transient)
    ADBDPlayer* _interactingPlayer;
    
    UPROPERTY(Transient)
    EAttackSubstate _nextAttackSubstate;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _hitTargets;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, ReplicatedUsing=OnRep_DreamworldComponent)
    UCharacterDreamworldComponent* _dreamworldComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UCharacterChaseVisualComponent* _characterChaseVisualComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, VisibleAnywhere)
    UCameraHandlerComponent* _cameraHandlerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UReversibleActionSystemComponent* _reversibleActionSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* _itemDropOffPosition;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;
    
    UPROPERTY(Transient)
    TArray<AActor*> _ignoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FEffectCameraTypeSettings> EffectCameraTypeSettings;
    
    UPROPERTY(Export)
    UChargeableComponent* _blindingChargeableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool _shouldUpdateStateMachineDriverOnPossessed;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBlindableComponent* _blindableComponent;
    
private:
    UPROPERTY(Transient)
    float _tutorialChargeableInteractionMultiplier;
    
    UPROPERTY(Export, Transient)
    UPollableEventListener* _eventListener;
    
    UPROPERTY(Export, VisibleAnywhere)
    UChaseComponent* _chaseComponent;
    
    UPROPERTY(Export, Transient)
    UZoneDetectorComponent* _meatHookZoneDetector;
    
    UPROPERTY(Export, Transient)
    UZoneDetectorComponent* _basementZoneDetector;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _bookmarkedInteraction;
    
    UPROPERTY(Export, Transient)
    TMap<EDetectionZone, UPrimitiveComponent*> _detectionZoneMap;
    
    UPROPERTY(Export, Transient)
    UAuthoritativeMovementComponent* _authoritativeMovementComponent;
    
    UPROPERTY(Replicated)
    float _screenAspectRatio;
    
    UPROPERTY(Export)
    UGameplayTagContainerComponent* _objectState;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioFXComponent* _audioFXComponent;
    
    UPROPERTY(Export)
    UPlayerPerspectiveComponent* _playerPerspectiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterSightComponent* _characterSightComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterSightableComponent* _characterSightableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionDetectorComponent* _interactionDetectorComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitivesRegistererComponent* _clippablePrimitivesRegistererComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UClippableProviderComponent* _clippableProviderComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDynamicCapsuleResizerComponent* _dynCapsuleResizer;
    
    UPROPERTY(Export)
    UPlayerGameRelevancyComponent* _playerGameRelevancyComponent;
    
    UPROPERTY(Export, Transient)
    UContextualQuestComponent* _contextualQuestComponent;
    
    UPROPERTY(Export)
    UActorComponent* _questEventHandler;
    
    UPROPERTY(Export, Transient)
    UChargeableProgressProviderComponent* _presentationChargeableProgressComponent;
    
    UPROPERTY(Transient)
    UCurveFloat* _currentGamepadYawCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* _currentGamepadPitchCurve;
    
    UPROPERTY(Transient)
    ADBDPlayerState* _associatedPlayerStateCache;
    
    UPROPERTY(Export, Transient)
    UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler;
    
public:
    ADBDPlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void UpdateLoadoutFromInventory();
    
    UFUNCTION(BlueprintCallable)
    bool TryInteractionType(EInputInteractionType interactionInputType, ADBDPlayer* requester, bool usingInputPersistence);
    
    UFUNCTION(BlueprintCallable)
    bool TryInteraction(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence);
    
    UFUNCTION(BlueprintCallable)
    bool TryFireScoreEvent(EDBDScoreTypes scoreType, float percentToAward);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTrapImmunity(float duration);
    
    UFUNCTION(BlueprintCallable)
    void TriggerAnimNotify(EAnimNotifyType animNotifyType);
    
    UFUNCTION(BlueprintCallable)
    void ToggleGhost();
    
    UFUNCTION(BlueprintCallable)
    bool TeleportToBP(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck);
    
    UFUNCTION(BlueprintCallable)
    void StopSnap(bool snap);
    
    UFUNCTION(BlueprintCallable)
    void StopMontage();
    
    UFUNCTION(BlueprintCallable)
    void StopAllMovement();
    
    UFUNCTION(BlueprintCallable)
    void SnapCharacter(bool snapPosition, FVector position, float stopSnapDistance, bool snapRotation, FRotator rotation, float time, bool useZCoord, bool sweepOnFinalSnap, bool snapRoll);
    
    UFUNCTION(BlueprintPure)
    bool ShouldPlayCarryAnim() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldFall() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWorldCollisionResponse(TEnumAsByte<ECollisionResponse> response);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialChargeableInteractionMultiplier(float multiplierValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPlayCarryAnim(bool NewShouldPlayCarryAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseMontage(bool reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestEventHandlerComponent(UActorComponent* component);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerDirection(FRotator rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnAuthoritativeMovement(bool authoritative);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseYawScale(float yawScale, float adjustTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMousePitchScale(float pitchScale, float adjustTime);
    
    UFUNCTION(BlueprintCallable)
    void SetItemUseAsToggle(bool value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsCloaked(bool NewIsCloaked, bool forced);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInParadise(bool inParadise);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreActorCollision(AActor* ActorToIgnore, bool ignore);
    
    UFUNCTION(BlueprintCallable)
    void SetGuidingPlayer(ADBDPlayer* guidingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadYawScale(float yawScale, float adjustTime);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadPitchScale(float pitchScale, float adjustTime);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableSkillChecks(bool isEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonVfxsVisibility(bool isFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonModelEnabled(bool enabled, bool force);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonMeshVisibility(bool isFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetFeetOnGround(bool feetOnGround);
    
    UFUNCTION(BlueprintCallable)
    void SetEmulateGamepadForMouseYaw(bool emulate);
    
    UFUNCTION(BlueprintCallable)
    void SetEmulateGamepadForMousePitch(bool emulate);
    
    UFUNCTION(BlueprintCallable)
    void SetDetectionZoneEnabled(EDetectionZone detectionZoneID, bool enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInteractionAnimation(EInteractionAnimation animation);
    
    UFUNCTION(BlueprintCallable)
    void SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flagIndex, bool enabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimationCrouchState(bool crouched);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAllowNavigation(bool enable);
    
    UFUNCTION(BlueprintCallable)
    void SetAllDetectionZonesEnabled(bool enabled);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_UpdateScreenAspectRatio(const float value);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCustomization(const TArray<FName>& customizationParts, const TArray<FCharmIdSlot>& customizationCharms);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendSecondaryActionPressed(bool fromCancelRequest);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendItemUseInput(bool pressed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendItemUse(bool use);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendItemDropInput(bool pressed);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendInteractionInput(bool pressed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendFastInteractionInput(bool pressed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAbilityInput(bool pressed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PlayerReady();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnInsaneSkillCheck();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Drop(ACollectable* item, const FVector& location, const FRotator& rotation, bool onDeath);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryActionInputPressed();
    
    UFUNCTION(BlueprintCallable)
    void ResetYawScale(float adjustTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetPitchScale(float adjustTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshRelativeRotation();
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshRelativePosition();
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera();
    
    UFUNCTION(BlueprintCallable)
    void RemoveStatusEffect(UStatusEffect* statusEffect);
    
    UFUNCTION(BlueprintCallable)
    void Remotely_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);
    
protected:
    UFUNCTION()
    void OnRep_Interactable();
    
    UFUNCTION()
    void OnRep_DreamworldComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPickupStart(ADBDPlayer* target);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupEnd(ADBDPlayer* target);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocallyObservedChanged();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnLevelReadyToPlay();
    
protected:
    UFUNCTION()
    void OnIntroCompletedNative();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnIntroCompleted();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInterruptedStart();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInsaneSkillCheck();
    
protected:
    UFUNCTION()
    void OnHudVisibilityChangedNative(const bool isVisible);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHudVisibilityChanged(const bool isVisible);
    
    UFUNCTION(BlueprintNativeEvent)
    FString OnGetCharacterName() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEscapeDoorActivated();
    
private:
    UFUNCTION()
    void OnCurrentMontageComplete(UAnimMontage* MontageAsset, bool interrupted);
    
    UFUNCTION()
    void OnCurrentMontageBlendingOut(UAnimMontage* MontageAsset, bool interrupted);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnClientRestart();
    
protected:
    UFUNCTION()
    void OnBlindChargeEmptied();
    
private:
    UFUNCTION()
    void OnAnimInstanceChanged();
    
public:
    UFUNCTION()
    void OnAllPlayerLoaded();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetRunVaultEnabled(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetReverseTraverseEnabled(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetMaxWalkSpeed(float maxWalkSpeed);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetInteractingPlayer(ADBDPlayer* interactingPlayer);
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetForceAuthoritativeMovement(bool value);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetEnableCapsuleDynamicResize(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetDebugSnapPoint(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetDebugPrintAvailableInteractions(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetDebugCarry(bool enabled);
    
protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetCustomization(const TArray<FName>& customizationParts, const TArray<FCharmIdSlot>& customizationCharms);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetContinuousPrintDebug(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetAuthoritativeMovement(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ServerResetMeshRelativeOffSet();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ReplicateController(AController* newController);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_OnInsaneSkillCheck();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_LeaveGame(FGuid uniqueLeavingPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_InteractionRollResult(bool rollResult);
    
protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ConfirmItemDrop(bool pressed);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void Local_NotifyMatchEnded();
    
    UFUNCTION(BlueprintPure)
    bool Local_IsInteractionInputPressed(EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorLocationByBottomCapsule(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult);
    
    UFUNCTION(BlueprintCallable)
    void ItemUseReleased();
    
    UFUNCTION(BlueprintCallable)
    void ItemUsePressed();
    
    UFUNCTION(BlueprintCallable)
    void ItemDropReleased();
    
    UFUNCTION(BlueprintCallable)
    void ItemDropPressed();
    
    UFUNCTION(BlueprintPure)
    bool IsStrafing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSnappingRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSnappingPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSnapping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunningAndMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingMontage(FAnimationMontageDescriptor animMontageID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnyMontage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocationClear(FVector targetPosition) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyObserved() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInTerrorRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionInputPressed(EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStalkMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInsideCloset() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInParadise() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInMeathookZone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIncapacitated() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInBasement() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeadHidden() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFacing(FVector direction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsExhausted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouchPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCloaked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingInterrupted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllowedNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAIControlled() const;
    
    UFUNCTION(BlueprintCallable)
    void InteractionInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void InteractionInputPressed();
    
    UFUNCTION(BlueprintCallable)
    void Input_ToggleCrouch();
    
    UFUNCTION(BlueprintCallable)
    void HideHead(bool hide);
    
    UFUNCTION(BlueprintPure)
    bool HasTrapImmunity() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMoveInput() const;
    
    UFUNCTION(BlueprintPure)
    bool HasDamageImmunity() const;
    
    UFUNCTION(BlueprintPure)
    bool HasClearPathToTargetWithIgnore(FVector targetPosition, const TArray<AActor*>& ignoreActors) const;
    
    UFUNCTION(BlueprintPure)
    bool HasClearPathToTarget(FVector targetPosition) const;
    
    UFUNCTION(BlueprintPure)
    bool HasClearPathToItemDropOffPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnimMontageEnded() const;
    
    UFUNCTION(BlueprintPure)
    float GetTunableValue(FName key, float defaultValue, bool warnIfRowMissing) const;
    
    UFUNCTION(BlueprintNativeEvent)
    ADBDPlayerController* GetSharedPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRunVaultEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetReverseTraverseEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRepControlRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingTrapImmunityDuration() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerTeam GetPlayerTeam() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerRole GetPlayerRole() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerInteractionHandler* GetPlayerInteractionHandler() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetPlayerDirection() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetPlayerCamera() const;
    
    UFUNCTION(BlueprintPure)
    UBoxOcclusionQueryComponent* GetPixelCounter();
    
    UFUNCTION(BlueprintPure)
    UPerkManager* GetPerkManager() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentPixelsVisible() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentMovementSpeed() const;
    
    UFUNCTION(BlueprintPure)
    EPawnType GetPawnType() const;
    
    UFUNCTION(BlueprintPure)
    UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler() const;
    
    UFUNCTION(BlueprintPure)
    UGameplayTagContainerComponent* GetObjectState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetNearbyGroundLocation(FVector& groundLocation);
    
public:
    UFUNCTION(BlueprintPure)
    FString GetNameDebugString() const;
    
    UFUNCTION(BlueprintPure)
    UMontagePlayer* GetMontagePlayer() const;
    
    UFUNCTION(BlueprintPure)
    FMontagePlaybackDefinition GetMontagePlaybackDefinition(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) const;
    
    UFUNCTION(BlueprintPure)
    float GetMontageLength(FAnimationMontageDescriptor animMontageID) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetMontage(FAnimationMontageDescriptor animMontageID) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMeshFeetPosition() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetLuck() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetLastSafeLocation() const;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UItemModifier*> GetItemModifiers() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetItemDropOffTransform() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItemAddon*> GetItemAddons() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInterrupting() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInteracting() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInFirstPerson() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsBeyondCrouchWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInteractionRollResult() const;
    
    UFUNCTION(BlueprintCallable)
    FInteractionPlayerProperties GetInteractionPlayerProperties();
    
    UFUNCTION(BlueprintPure)
    UInteractionDetectorComponent* GetInteractionDetectorComponent() const;
    
    UFUNCTION(BlueprintPure)
    AInteractable* GetInteractable() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetGuidingPlayer() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetGrassEffectRadiusMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetForceDisableSkillChecks() const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetFirstComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFeetPositionAtTargetLocation(FVector location) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFeetPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFeetOnGround() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterDreamworldComponent* GetDreamworldComponent() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetDetectionZone(EDetectionZone detectionZoneID) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDebugPrintAvailableInteractions() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDebugFailAllInteractions() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayerState* GetDBDPlayerState() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
    
    UFUNCTION(BlueprintPure)
    EInteractionAnimation GetCurrentInteractionAnimation() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetCurrentInteraction() const;
    
    UFUNCTION(BlueprintPure)
    bool GetContinuousPrintDebug() const;
    
    UFUNCTION(BlueprintPure)
    UChaseComponent* GetChaseComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeableInteractionMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterInventoryComponent* GetCharacterInventoryComponent() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayerCameraManager* GetCameraManager() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraCharacterYawDiff() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBoneRelativeLocation(FName targetBone, FName relativeBone) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBoneLocation(FName name, TEnumAsByte<EBoneSpaces::Type> space) const;
    
    UFUNCTION(BlueprintPure)
    UBlindableComponent* GetBlindableComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseFOV() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAverageVelocity() const;
    
    UFUNCTION(BlueprintPure)
    UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetAttachPoint(FName attachPointName) const;
    
    UFUNCTION(BlueprintNativeEvent)
    APlayerState* GetAssociatedPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimTags(TArray<FName>& outTags) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    FAnimData GetAnimData();
    
    UFUNCTION(BlueprintPure)
    FVector GetAlmostCurrentVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorLocationFromFeetLocation(const FVector FeetLocation) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindFurthestClearLocationBetweenPoints(FVector startPosition, FVector targetPosition) const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* FindClosestSlashablePlayerInDetectionZone(EDetectionZone detectionZoneID) const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* FindClosestSlashableCharacterInDetectionZone(EDetectionZone detectionZoneID) const;
    
    UFUNCTION(BlueprintCallable)
    void FastInteractionInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void FastInteractionInputPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dissolve(bool NewDissolve);
    
    UFUNCTION(BlueprintCallable)
    void DetachInteractor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugPrint(const FString& InString) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSkillChecks();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DBDUnCrouch();
    
    UFUNCTION(BlueprintCallable)
    void DBDLog(const FString& logText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DBDCrouch();
    
private:
    UFUNCTION(Exec)
    void DBD_ToggleForceAuthoritativeMovement();
    
public:
    UFUNCTION(Exec)
    void DBD_ToggleDebugInteractionInZone();
    
protected:
    UFUNCTION(Exec)
    void DBD_SetMouseTurnSpeedMultiplier(float value);
    
    UFUNCTION(Exec)
    void DBD_SetMouseLookUpSpeedMultiplier(float value);
    
public:
    UFUNCTION(BlueprintCallable)
    void DBD_SetForwardInputLock(bool isLocked);
    
    UFUNCTION(Exec)
    void DBD_DebugStartInteraction();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_TryInteractionType(EInputInteractionType interactionType, ADBDPlayer* requester);
    
    UFUNCTION(Client, Reliable)
    void Client_TryInteraction(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_SendCancelInteraction(const UInteractionDefinition* interactionDefinition);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_QueueInteraction(EInputInteractionType InteractionType, ADBDPlayer* Requester, float queuedTimer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_ClearInteractionQueue();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CanInterrupt_BP() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool CanInteractWithItems() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract();
    
    UFUNCTION(BlueprintCallable)
    void CancelCarry(bool alsoCancelForOtherPlayer);
    
    UFUNCTION(BlueprintPure)
    bool CanBeBlinded() const;
    
    UFUNCTION(BlueprintCallable)
    void CameraUpdated();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Broadcast_PlayMontage_Server(FAnimationMontageDescriptor animMontageID, float playRate);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Broadcast_PlayMontage_Multicast(FAnimationMontageDescriptor animMontageID, float playRate);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Authority_TryForceEndOngoingScoreEvent(EDBDScoreTypes scoreType);
    
    UFUNCTION(BlueprintCallable)
    bool Authority_TryForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetDreamworldComponent(UCharacterDreamworldComponent* component);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RequestStun(EStunType stunType, ADBDPlayer* stunner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* Authority_ImposeStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* Authority_ImposeDynamicStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);
    
private:
    UFUNCTION()
    void Authority_EvaluateIfPlayerCanSee();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EndStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag);
    
    UFUNCTION(BlueprintCallable)
    void Authority_ActivateAuthoritativeMovementOnDropped();
    
    UFUNCTION(BlueprintCallable)
    void AttachInteractor(UInteractor* interactor);
    
    UFUNCTION(BlueprintCallable)
    void AddDetectionZone(EDetectionZone detectionZoneID, UPrimitiveComponent* zone);
    
    UFUNCTION(BlueprintCallable)
    void AbilityInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void AbilityInputPressed();
    
    
    // Fix for true pure virtual functions not being implemented
};

