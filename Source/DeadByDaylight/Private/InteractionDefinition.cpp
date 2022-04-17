#include "InteractionDefinition.h"

class ADBDPlayer;
class UInterruptionDefinition;
class UInteractionDefinition;
class UObject;
class AActor;
class UInteractor;
class AInteractable;
class UPrimitiveComponent;

bool UInteractionDefinition::ShouldStartUpdateMontageDuringEnter(const ADBDPlayer* character) const {
    return false;
}

void UInteractionDefinition::SetSecondaryAttackButtonType(EButtonType buttonType) {
}

void UInteractionDefinition::SetSecondaryActionInputType(EInputInteractionType inputType) {
}

void UInteractionDefinition::SetSecondaryActionButtonType(EButtonType buttonType) {
}

void UInteractionDefinition::SetCancelButtonType(EButtonType buttonType) {
}

void UInteractionDefinition::SetAtlantaSecondaryActionInputType(EInputInteractionType inputType) {
}

void UInteractionDefinition::RemoveDisablingTags(FGameplayTag tagToRemove) {
}




















bool UInteractionDefinition::IsSupportedCharacterType(const ADBDPlayer* player) const {
    return false;
}

bool UInteractionDefinition::IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInterruptionDefinition* interruption) const {
    return false;
}

bool UInteractionDefinition::IsInteractionUsingOffering_Implementation(const ADBDPlayer* player) const {
    return false;
}

bool UInteractionDefinition::IsInteractionPossibleClient_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const {
    return false;
}

bool UInteractionDefinition::IsInteractionPossibleBP_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const {
    return false;
}

bool UInteractionDefinition::IsInteractionDone_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const {
    return false;
}

bool UInteractionDefinition::IsInteractableInPlayerView(const ADBDPlayer* player) const {
    return false;
}

bool UInteractionDefinition::IsInputPressed(const ADBDPlayer* player) const {
    return false;
}

bool UInteractionDefinition::IsCharacterFacingInteractorDirection(const ADBDPlayer* player) const {
    return false;
}

bool UInteractionDefinition::IsCancelable_Implementation(const ADBDPlayer* player) const {
    return false;
}

FAnimationMontageDescriptor UInteractionDefinition::GetUpdateMontage_Implementation(const ADBDPlayer* player) const {
    return FAnimationMontageDescriptor{};
}

bool UInteractionDefinition::GetUpdateHighlightOpacityUsingCharge() const {
    return false;
}

float UInteractionDefinition::GetUpdateAnimationPlayRate(const ADBDPlayer* player) const {
    return 0.0f;
}

FMontagePlaybackDefinition UInteractionDefinition::GetUpdateAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const {
    return FMontagePlaybackDefinition{};
}

float UInteractionDefinition::GetSnapTimeAtStart(const ADBDPlayer* player) const {
    return 0.0f;
}

float UInteractionDefinition::GetSnapTime_Implementation(const ADBDPlayer* player) const {
    return 0.0f;
}

FName UInteractionDefinition::GetSnapSocketName_Implementation(const ADBDPlayer* player) const {
    return NAME_None;
}

FVector UInteractionDefinition::GetSnapPointPositionAtStart(const ADBDPlayer* player) const {
    return FVector{};
}

FVector UInteractionDefinition::GetSnapPointPosition_Implementation(const ADBDPlayer* player) const {
    return FVector{};
}

float UInteractionDefinition::GetSnapDistanceAtStart(const ADBDPlayer* player) const {
    return 0.0f;
}

float UInteractionDefinition::GetSnapDistance_Implementation(const ADBDPlayer* player) const {
    return 0.0f;
}

EButtonType UInteractionDefinition::GetSecondaryAttackButtonType() const {
    return EButtonType::None;
}

EInputInteractionType UInteractionDefinition::GetSecondaryActionInputType(const UObject* worldContextObject) const {
    return EInputInteractionType::VE_None;
}

EButtonType UInteractionDefinition::GetSecondaryActionButtonType() const {
    return EButtonType::None;
}

FRotator UInteractionDefinition::GetRotationToSnapPointAtStart(const ADBDPlayer* player) const {
    return FRotator{};
}

FRotator UInteractionDefinition::GetRotationToSnapPoint_Implementation(const ADBDPlayer* player) const {
    return FRotator{};
}

EPowerProgressBar UInteractionDefinition::GetPowerProgressBar() const {
    return EPowerProgressBar::NoProgressBar;
}

ADBDPlayer* UInteractionDefinition::GetPlayerDependancy_Implementation(const ADBDPlayer* interactingPlayer) {
    return NULL;
}

TArray<UInterruptionDefinition*> UInteractionDefinition::GetInterruptionDefinitions() const {
    return TArray<UInterruptionDefinition*>();
}

UInteractor* UInteractionDefinition::GetInteractor() const {
    return NULL;
}

float UInteractionDefinition::GetInteractionTimeMultiplier_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UInteractionDefinition::GetInteractionTime(const ADBDPlayer* character) const {
    return 0.0f;
}

FString UInteractionDefinition::GetInteractionText_Implementation(const ADBDPlayer* player) const {
    return TEXT("");
}

float UInteractionDefinition::GetInteractionExitTime_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

FText UInteractionDefinition::GetInteractionDescriptionText() const {
    return FText::GetEmpty();
}

AInteractable* UInteractionDefinition::GetInteractable() const {
    return NULL;
}

FVector UInteractionDefinition::GetFocalPointPosition_Implementation(const ADBDPlayer* player) const {
    return FVector{};
}

FAnimationMontageDescriptor UInteractionDefinition::GetExitMontage_Implementation(const ADBDPlayer* player) const {
    return FAnimationMontageDescriptor{};
}

float UInteractionDefinition::GetExitAnimationPlayRate(const ADBDPlayer* player) const {
    return 0.0f;
}

FMontagePlaybackDefinition UInteractionDefinition::GetExitAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const {
    return FMontagePlaybackDefinition{};
}

FAnimationMontageDescriptor UInteractionDefinition::GetEnterMontage_Implementation(const ADBDPlayer* player) const {
    return FAnimationMontageDescriptor{};
}

FMontagePlaybackDefinition UInteractionDefinition::GetEnterAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const {
    return FMontagePlaybackDefinition{};
}

float UInteractionDefinition::GetChargePercent() const {
    return 0.0f;
}

EButtonType UInteractionDefinition::GetCancelButtonType() const {
    return EButtonType::None;
}

bool UInteractionDefinition::GetAllowNavigation_Implementation(const ADBDPlayer* player) const {
    return false;
}

FVector UInteractionDefinition::GetActualSnapPointPositionAtStart(const ADBDPlayer* player) const {
    return FVector{};
}

FVector UInteractionDefinition::GetActualSnapPointPosition(const ADBDPlayer* player) const {
    return FVector{};
}

TArray<AActor*> UInteractionDefinition::GetActorsToIgnoreOverlap_Implementation() const {
    return TArray<AActor*>();
}

float UInteractionDefinition::GetActorHeightDelta(const ADBDPlayer* player) const {
    return 0.0f;
}

float UInteractionDefinition::GetActionSpeedMultiplier(const ADBDPlayer* character) const {
    return 0.0f;
}

bool UInteractionDefinition::DoesPlayerHaveClearPath(const ADBDPlayer* player) const {
    return false;
}

void UInteractionDefinition::CompleteCharge(ADBDPlayer* character) {
}

EInteractionComparisonPriority UInteractionDefinition::ComparePriorityToInteraction_Implementation(const UInteractionDefinition* interaction) const {
    return EInteractionComparisonPriority::Lower;
}

bool UInteractionDefinition::CanOverrideInteraction_Implementation(const UInteractionDefinition* interaction) const {
    return false;
}

float UInteractionDefinition::CalculateSnapTimeForConstantSpeed(const ADBDPlayer* player, const float speed) const {
    return 0.0f;
}

float UInteractionDefinition::CalculateSnapTimeForConstantMaxNormalMovementSpeed(const ADBDPlayer* player, float speedBoost) const {
    return 0.0f;
}

void UInteractionDefinition::AttachToZone(UPrimitiveComponent* zone) {
}

void UInteractionDefinition::AttachToInteractor(UInteractor* interactor) {
}

bool UInteractionDefinition::AtlantaItemUseToggleState_Implementation() {
    return false;
}

void UInteractionDefinition::AddMutuallyExclusiveInteraction(UInteractionDefinition* interaction) {
}

void UInteractionDefinition::AddDisablingTags(FGameplayTag tagToAdd) {
}

UInteractionDefinition::UInteractionDefinition() {
    this->SnapTime = 0.10f;
    this->ResetCameraDuringSnap = false;
    this->IsInteractionCancelled = false;
    this->AllowStartInteractionFromHeldInput = false;
    this->AtlantaOverridePowerButtonImage = false;
    this->AtlantaOverrideItemUseToggleState = false;
    this->OverrideStopInteractionOnInputRelease = false;
    this->StopInteractionOnMontageComplete = false;
    this->StopInteractionOnMontageBlendingOut = false;
    this->StopInteractionOnTimerExpire = false;
    this->StopInteractionOnHeightDelta = false;
    this->StopEnterMontageOnExit = true;
    this->StopUpdateMontageOnExit = false;
    this->IgnoreStrafeAnimFix = false;
    this->InteractionAnimation = EInteractionAnimation::VE_None;
    this->CamperCanInteract = false;
    this->SlasherCanInteract = false;
    this->AllowInputPersistence = true;
    this->SnapPosition = false;
    this->SnapRotation = false;
    this->SnapStopDistance = 0.00f;
    this->TestClearPathDuringSnap = true;
    this->CheckInteractableIsInPlayerView = false;
    this->CheckInteractableInViewSphereSweepRadius = 10.00f;
    this->CheckInteractableInViewOffsetDistanceToHitPoint = 0.00f;
    this->IsInterruptibleIfTestClearPathDuringSnapFails = true;
    this->TestPlayerOrientationOnSnap = true;
    this->ScaleEnterAnimationToTime = false;
    this->ScaleMainAnimationToTime = false;
    this->ScaleExitAnimationToTime = false;
    this->SnapBackType = ESnapBackType::None;
    this->SnapBackPositionType = ESnapBackPositionType::SnapBackToInitialPosition;
    this->SnapToInitialRotationDuringSnapBack = false;
    this->UseStartSnapTimeForSnapExitTime = false;
    this->CanInteractWhileIncapacitated = false;
    this->CanInteractWhileCloaked = false;
    this->CanInteractWhileAttacking = false;
    this->CanInteractWhileChainLinked = false;
    this->CanInteractWhileShocked = false;
    this->CanInteractWhileUnhookingSelf = false;
    this->CanInteractWhileCarrying = true;
    this->AllowNavigation = false;
    this->AllowNavigationInput = true;
    this->AllowRotation = false;
    this->UseCameraMontageMode = true;
    this->OwnerBlocksAttack = true;
    this->IsHighPriority = false;
    this->AllowOverridingWhenNotForced = false;
    this->IgnoreOverlapOnInteractable = true;
    this->UseAuthoritativeMovement = true;
    this->CanBeAuthoritativePushedDuringEnter = false;
    this->CanBeAuthoritativePushedDuringUpdate = false;
    this->CanBeAuthoritativePushedDuringExit = false;
    this->CanAuthoritativePush = true;
    this->CancelOnHit = false;
    this->CancelOnAttack = false;
    this->HideItem = true;
    this->AutoBindToParentInteractor = true;
    this->AutoBindToParentZone = true;
    this->CancelOnMoveInitialDelay = 0.00f;
    this->CancelOnMoveInput = -1.00f;
    this->CancelOnMoveInputOnlyWhenRunning = false;
    this->CanCrouch = false;
    this->AffectsStillness = true;
    this->ConsideredIdle = false;
    this->BlockSelfInteract = true;
    this->InteractionTime = 0.00f;
    this->ShowHighlightWhenActive = false;
    this->AtlantaAlwaysHighPriority = false;
    this->ShowHighlightWhenAvailable = false;
    this->ProgressBarToUpdate = EPowerProgressBar::NoProgressBar;
    this->UpdateHighlightOpacityUsingCharge = false;
    this->InteractionInputType = EInputInteractionType::VE_Interact;
    this->StopInteractionOnInputRelease = false;
    this->DebugUnavailability = false;
    this->SecondaryActionInputType = EInputInteractionType::VE_None;
    this->AtlantaSecondaryActionInputType = EInputInteractionType::VE_None;
    this->NavigationSpeedCurveEnter = NULL;
    this->NavigationSpeedCurve = NULL;
    this->NavigationSpeedCurveExit = NULL;
    this->InteractionAtlantaInputType = EInputInteractionType::VE_None;
    this->AtlantaStopInteractionOnInputRelease = false;
    this->_shouldCheckInteractedUpon = true;
    this->OwnershipUsability = EInteractionOwnership::AnyCanUse;
    this->ExitInteractionTime = 0.00f;
    this->ApplyModifiersToExitTime = false;
    this->InteractionCanBeToggled = false;
    this->IgnoreSprintToCancelSetting = false;
    this->ForceWithSprintToCancelSetting = false;
    this->AtlantaLastButtonPressed = EButtonType::None;
    this->InteractionHeightDeltaMax = 150.00f;
    this->MaximumVelocity = -1.00f;
    this->_canBeAttachedToAnyZone = true;
    this->CancelButtonType = EButtonType::CancelButton;
    this->SecondaryActionButtonType = EButtonType::None;
    this->SecondaryAttackButtonType = EButtonType::AttackButton;
    this->_isInterruptibleBySacrifice = true;
    this->IgnoreStun = false;
    this->_useHoldPrompt = false;
    this->_allowInteractionInNarrowSpaces = false;
    this->_allowIKSensorDuringInteraction = false;
    this->_startUpdateMontageDuringEnter = false;
    this->_interactor = NULL;
    this->_zone = NULL;
    this->_cancelInputType = EInputInteractionType::VE_None;
}

