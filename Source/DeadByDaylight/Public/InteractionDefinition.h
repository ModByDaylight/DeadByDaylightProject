#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Activatable.h"
#include "UObject/NoExportTypes.h"
#include "Interaction.h"
#include "ActivationDefinition.h"
#include "EInteractionAnimation.h"
#include "UObject/NoExportTypes.h"
#include "ESnapBackType.h"
#include "UObject/NoExportTypes.h"
#include "ESnapBackPositionType.h"
#include "EPowerProgressBar.h"
#include "GameplayTagContainer.h"
#include "EInputInteractionType.h"
#include "InteractionAnimNotifyDelegate.h"
#include "EInteractionOwnership.h"
#include "EButtonType.h"
#include "AnimationMontageDescriptor.h"
#include "GameplayTagContainer.h"
#include "SecondaryInteractionProperties.h"
#include "MontagePlaybackDefinition.h"
#include "EInteractionComparisonPriority.h"
#include "InteractionDefinition.generated.h"

class AActor;
class UInterruptionDefinition;
class AInteractable;
class UCurveFloat;
class UInteractor;
class UObject;
class UInteractionDefinition;
class UPlayerInteractionHandler;
class UPrimitiveComponent;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractionDefinition : public USceneComponent, public IActivatable, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString InteractionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ResetCameraDuringSnap;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsInteractionCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowStartInteractionFromHeldInput;
    
    UPROPERTY(EditAnywhere)
    bool AtlantaOverridePowerButtonImage;
    
    UPROPERTY(EditAnywhere)
    FName AtlantaInteractionID;
    
    UPROPERTY(EditAnywhere)
    bool AtlantaOverrideItemUseToggleState;
    
    UPROPERTY(EditAnywhere)
    bool OverrideStopInteractionOnInputRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopInteractionOnMontageComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopInteractionOnMontageBlendingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopInteractionOnTimerExpire;
    
    UPROPERTY(EditAnywhere)
    bool StopInteractionOnHeightDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopEnterMontageOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopUpdateMontageOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreStrafeAnimFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionAnimation InteractionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CamperCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SlasherCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowInputPersistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SnapPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SnapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnapStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TestClearPathDuringSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CheckInteractableIsInPlayerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheckInteractableInViewSphereSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CheckInteractableInViewOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheckInteractableInViewOffsetDistanceToHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInterruptibleIfTestClearPathDuringSnapFails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TestPlayerOrientationOnSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScaleEnterAnimationToTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScaleMainAnimationToTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScaleExitAnimationToTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESnapBackType SnapBackType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESnapBackPositionType SnapBackPositionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SnapBackPositionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SnapToInitialRotationDuringSnapBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseStartSnapTimeForSnapExitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractWhileIncapacitated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractWhileCloaked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractWhileAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractWhileChainLinked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractWhileShocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractWhileUnhookingSelf;
    
    UPROPERTY(EditDefaultsOnly)
    bool CanInteractWhileCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowNavigationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseCameraMontageMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OwnerBlocksAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHighPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowOverridingWhenNotForced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreOverlapOnInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseAuthoritativeMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeAuthoritativePushedDuringEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeAuthoritativePushedDuringUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeAuthoritativePushedDuringExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanAuthoritativePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CancelOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CancelOnAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HideItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoBindToParentInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoBindToParentZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelOnMoveInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelOnMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CancelOnMoveInputOnlyWhenRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> ProgressBasedSkillChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AffectsStillness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ConsideredIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlockSelfInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowHighlightWhenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AtlantaAlwaysHighPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowHighlightWhenAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPowerProgressBar ProgressBarToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UpdateHighlightOpacityUsingCharge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInputInteractionType InteractionInputType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool StopInteractionOnInputRelease;
    
    UPROPERTY(Export)
    TArray<UInterruptionDefinition*> _interruptionDefinitions;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionAnimNotify OnInteractionAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DebugUnavailability;
    
    UPROPERTY(EditAnywhere)
    EInputInteractionType SecondaryActionInputType;
    
    UPROPERTY(EditAnywhere)
    EInputInteractionType AtlantaSecondaryActionInputType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* NavigationSpeedCurveEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* NavigationSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* NavigationSpeedCurveExit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EInputInteractionType InteractionAtlantaInputType;
    
    UPROPERTY(EditDefaultsOnly)
    bool AtlantaStopInteractionOnInputRelease;
    
    UPROPERTY(EditDefaultsOnly)
    bool _shouldCheckInteractedUpon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionOwnership OwnershipUsability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExitInteractionTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool ApplyModifiersToExitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InteractionDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    bool InteractionCanBeToggled;
    
    UPROPERTY(EditDefaultsOnly)
    bool IgnoreSprintToCancelSetting;
    
    UPROPERTY(EditDefaultsOnly)
    bool ForceWithSprintToCancelSetting;
    
    UPROPERTY(BlueprintReadOnly)
    EButtonType AtlantaLastButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionHeightDeltaMax;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimationMontageDescriptor EnterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimationMontageDescriptor UpdateMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimationMontageDescriptor ExitMontage;
    
    UPROPERTY(EditAnywhere)
    FName SnapSocketName;
    
    UPROPERTY(EditAnywhere)
    bool _canBeAttachedToAnyZone;
    
    UPROPERTY(EditAnywhere)
    EButtonType CancelButtonType;
    
    UPROPERTY(EditAnywhere)
    EButtonType SecondaryActionButtonType;
    
    UPROPERTY(EditAnywhere)
    EButtonType SecondaryAttackButtonType;
    
    UPROPERTY(EditDefaultsOnly)
    bool _isInterruptibleBySacrifice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreStun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer _tags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag _objectStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FSecondaryInteractionProperties> _secondaryInteractions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _useHoldPrompt;
    
    UPROPERTY(EditDefaultsOnly)
    bool _allowInteractionInNarrowSpaces;
    
    UPROPERTY(EditDefaultsOnly)
    bool _allowIKSensorDuringInteraction;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool _startUpdateMontageDuringEnter;
    
    UPROPERTY(Export)
    UInteractor* _interactor;
    
    UPROPERTY(Export, Transient)
    TArray<UInteractionDefinition*> _mutuallyExclusiveInteractionsClient;
    
    UPROPERTY(EditAnywhere)
    FActivationDefinition _activationDefinition;
    
    UPROPERTY(Export)
    UPrimitiveComponent* _zone;
    
    UPROPERTY(EditAnywhere)
    EInputInteractionType _cancelInputType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _preventingTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _disablingTags;
    
    UPROPERTY(Export, Transient)
    TArray<UPlayerInteractionHandler*> _evaluatingInteractionHandlers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSecondaryInteractionProperties DEPRECATED_SecondaryInteractionProperties;
    
public:
    UInteractionDefinition();
    UFUNCTION(BlueprintPure)
    bool ShouldStartUpdateMontageDuringEnter(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryAttackButtonType(EButtonType buttonType);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryActionInputType(EInputInteractionType inputType);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryActionButtonType(EButtonType buttonType);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelButtonType(EButtonType buttonType);
    
    UFUNCTION(BlueprintCallable)
    void SetAtlantaSecondaryActionInputType(EInputInteractionType inputType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDisablingTags(FGameplayTag tagToRemove);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateMontageStart(ADBDPlayer* player);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInterruptorUpdateStart(UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptor, ADBDPlayer* interruptee);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionUpdateTick(ADBDPlayer* player, float deltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionUpdateStart(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionUpdateMontageReachedMiddle(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionUpdateEnd(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionInterruptStarted(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionInterruptStart(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionInterruptEnd(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionInit(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionFinished(ADBDPlayer* player, bool hasInteractionStarted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionExitTick(ADBDPlayer* player, float deltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionExitStart(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionExitEnd(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionEnterTick(ADBDPlayer* player, float deltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionEnterStart(ADBDPlayer* player, float actualSnapTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionEnterEnd(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionCancelled(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionAnimNotifyEvent(FName notifyID, ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    bool IsSupportedCharacterType(const ADBDPlayer* player) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInterruptionDefinition* interruption) const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsInteractionUsingOffering(const ADBDPlayer* player) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool IsInteractionPossibleClient(const ADBDPlayer* player, EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsInteractionPossibleBP(const ADBDPlayer* player, EInputInteractionType interactionType) const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsInteractionDone(const ADBDPlayer* player, EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractableInPlayerView(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputPressed(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterFacingInteractorDirection(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsCancelable(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimationMontageDescriptor GetUpdateMontage(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool GetUpdateHighlightOpacityUsingCharge() const;
    
    UFUNCTION(BlueprintPure)
    float GetUpdateAnimationPlayRate(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    FMontagePlaybackDefinition GetUpdateAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;
    
    UFUNCTION(BlueprintPure)
    float GetSnapTimeAtStart(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetSnapTime(const ADBDPlayer* player) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    FName GetSnapSocketName(const ADBDPlayer* player) const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetSnapPointPositionAtStart(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetSnapPointPosition(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    float GetSnapDistanceAtStart(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetSnapDistance(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    EButtonType GetSecondaryAttackButtonType() const;
    
    UFUNCTION(BlueprintPure)
    EInputInteractionType GetSecondaryActionInputType(const UObject* worldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    EButtonType GetSecondaryActionButtonType() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationToSnapPointAtStart(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FRotator GetRotationToSnapPoint(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    EPowerProgressBar GetPowerProgressBar() const;
    
    UFUNCTION(BlueprintNativeEvent)
    ADBDPlayer* GetPlayerDependancy(const ADBDPlayer* interactingPlayer);
    
    UFUNCTION(BlueprintPure)
    TArray<UInterruptionDefinition*> GetInterruptionDefinitions() const;
    
    UFUNCTION(BlueprintPure)
    UInteractor* GetInteractor() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetInteractionTimeMultiplier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetInteractionTime(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetInteractionText(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetInteractionExitTime(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    FText GetInteractionDescriptionText() const;
    
    UFUNCTION(BlueprintPure)
    AInteractable* GetInteractable() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetFocalPointPosition(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimationMontageDescriptor GetExitMontage(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    float GetExitAnimationPlayRate(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    FMontagePlaybackDefinition GetExitAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimationMontageDescriptor GetEnterMontage(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    FMontagePlaybackDefinition GetEnterAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;
    
    UFUNCTION(BlueprintPure)
    float GetChargePercent() const;
    
    UFUNCTION(BlueprintPure)
    EButtonType GetCancelButtonType() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetAllowNavigation(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActualSnapPointPositionAtStart(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActualSnapPointPosition(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent)
    TArray<AActor*> GetActorsToIgnoreOverlap() const;
    
    UFUNCTION(BlueprintPure)
    float GetActorHeightDelta(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    float GetActionSpeedMultiplier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesPlayerHaveClearPath(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteCharge(ADBDPlayer* character);
    
    UFUNCTION(BlueprintNativeEvent)
    EInteractionComparisonPriority ComparePriorityToInteraction(const UInteractionDefinition* interaction) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanOverrideInteraction(const UInteractionDefinition* interaction) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateSnapTimeForConstantSpeed(const ADBDPlayer* player, const float speed) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateSnapTimeForConstantMaxNormalMovementSpeed(const ADBDPlayer* player, float speedBoost) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachToZone(UPrimitiveComponent* zone);
    
    UFUNCTION(BlueprintCallable)
    void AttachToInteractor(UInteractor* interactor);
    
    UFUNCTION(BlueprintNativeEvent)
    bool AtlantaItemUseToggleState();
    
    UFUNCTION(BlueprintCallable)
    void AddMutuallyExclusiveInteraction(UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintCallable)
    void AddDisablingTags(FGameplayTag tagToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

