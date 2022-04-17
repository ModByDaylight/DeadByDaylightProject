#include "DBDPlayer.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "AuthoritativeMovementComponent.h"
#include "BoxOcclusionQueryComponent.h"
#include "ActivatorComponent.h"
#include "CharacterChaseVisualComponent.h"
#include "Components/BoxComponent.h"
#include "CameraHandlerComponent.h"
#include "OtherCharactersVerticalCollisionsHandler.h"
#include "PlayerInteractionHandler.h"
#include "PerkManager.h"
#include "GameplayTagContainerComponent.h"
#include "InteractionDetectorComponent.h"
#include "MontagePlayer.h"
#include "Components/SceneComponent.h"
#include "ChaseComponent.h"
#include "CharacterInventoryComponent.h"
#include "BlindableComponent.h"
#include "MaterialHelper.h"
#include "ReversibleActionSystemComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "ChargeableComponent.h"
#include "PollableEventListener.h"
#include "ZoneDetectorComponent.h"
#include "AudioFXComponent.h"
#include "PlayerPerspectiveComponent.h"
#include "CharacterSightComponent.h"
#include "CharacterSightableComponent.h"
#include "PrimitivesRegistererComponent.h"
#include "ClippableProviderComponent.h"
#include "DynamicCapsuleResizerComponent.h"
#include "PlayerGameRelevancyComponent.h"
#include "ContextualQuestComponent.h"
#include "ChargeableProgressProviderComponent.h"

class UGameplayModifierContainer;
class UAnimMontage;
class UActorComponent;
class ADBDPlayer;
class UInteractionDefinition;
class ACharacter;
class UAnimInstance;
class AActor;
class AController;
class ACollectable;
class UStatusEffect;
class UItemAddon;
class UPrimitiveComponent;
class ADBDPlayerController;
class UCameraComponent;
class AInteractable;
class UItemModifier;
class UCharacterDreamworldComponent;
class UCustomizedSkeletalMesh;
class ADBDPlayerState;
class ADBDPlayerCameraManager;
class APlayerState;
class UInteractor;

void ADBDPlayer::UpdateLoadoutFromInventory() {
}

bool ADBDPlayer::TryInteractionType(EInputInteractionType interactionInputType, ADBDPlayer* requester, bool usingInputPersistence) {
    return false;
}

bool ADBDPlayer::TryInteraction(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence) {
    return false;
}

bool ADBDPlayer::TryFireScoreEvent(EDBDScoreTypes scoreType, float percentToAward) {
    return false;
}

void ADBDPlayer::TriggerTrapImmunity(float duration) {
}

void ADBDPlayer::TriggerAnimNotify(EAnimNotifyType animNotifyType) {
}

void ADBDPlayer::ToggleGhost() {
}

bool ADBDPlayer::TeleportToBP(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck) {
    return false;
}

void ADBDPlayer::StopSnap(bool snap) {
}

void ADBDPlayer::StopMontage() {
}

void ADBDPlayer::StopAllMovement() {
}

void ADBDPlayer::SnapCharacter(bool snapPosition, FVector position, float stopSnapDistance, bool snapRotation, FRotator rotation, float time, bool useZCoord, bool sweepOnFinalSnap, bool snapRoll) {
}

bool ADBDPlayer::ShouldPlayCarryAnim() const {
    return false;
}

bool ADBDPlayer::ShouldFall() const {
    return false;
}

void ADBDPlayer::SetWorldCollisionResponse(TEnumAsByte<ECollisionResponse> response) {
}

void ADBDPlayer::SetTutorialChargeableInteractionMultiplier(float multiplierValue) {
}

void ADBDPlayer::SetShouldPlayCarryAnim(bool NewShouldPlayCarryAnim) {
}

void ADBDPlayer::SetReverseMontage(bool reverse) {
}

void ADBDPlayer::SetQuestEventHandlerComponent(UActorComponent* component) {
}

void ADBDPlayer::SetPlayerDirection(FRotator rotation) {
}

void ADBDPlayer::SetPawnAuthoritativeMovement(bool authoritative) {
}

void ADBDPlayer::SetMouseYawScale(float yawScale, float adjustTime) {
}

void ADBDPlayer::SetMousePitchScale(float pitchScale, float adjustTime) {
}

void ADBDPlayer::SetItemUseAsToggle(bool value) {
}

void ADBDPlayer::SetIsCloaked(bool NewIsCloaked, bool forced) {
}

void ADBDPlayer::SetInParadise(bool inParadise) {
}

void ADBDPlayer::SetIgnoreActorCollision(AActor* ActorToIgnore, bool ignore) {
}

void ADBDPlayer::SetGuidingPlayer(ADBDPlayer* guidingPlayer) {
}

void ADBDPlayer::SetGamepadYawScale(float yawScale, float adjustTime) {
}

void ADBDPlayer::SetGamepadPitchScale(float pitchScale, float adjustTime) {
}

void ADBDPlayer::SetForceDisableSkillChecks(bool isEnabled) {
}

void ADBDPlayer::SetFirstPersonVfxsVisibility(bool isFirstPerson) {
}

void ADBDPlayer::SetFirstPersonModelEnabled(bool enabled, bool force) {
}

void ADBDPlayer::SetFirstPersonMeshVisibility(bool isFirstPerson) {
}

void ADBDPlayer::SetFeetOnGround(bool feetOnGround) {
}

void ADBDPlayer::SetEmulateGamepadForMouseYaw(bool emulate) {
}

void ADBDPlayer::SetEmulateGamepadForMousePitch(bool emulate) {
}

void ADBDPlayer::SetDetectionZoneEnabled(EDetectionZone detectionZoneID, bool enabled) {
}

void ADBDPlayer::SetCurrentInteractionAnimation(EInteractionAnimation animation) {
}

void ADBDPlayer::SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flagIndex, bool enabled) {
}


void ADBDPlayer::SetAllowNavigation(bool enable) {
}

void ADBDPlayer::SetAllDetectionZonesEnabled(bool enabled) {
}

void ADBDPlayer::Server_UpdateScreenAspectRatio_Implementation(const float value) {
}
bool ADBDPlayer::Server_UpdateScreenAspectRatio_Validate(const float value) {
    return true;
}

void ADBDPlayer::Server_SetCustomization_Implementation(const TArray<FName>& customizationParts, const TArray<FCharmIdSlot>& customizationCharms) {
}
bool ADBDPlayer::Server_SetCustomization_Validate(const TArray<FName>& customizationParts, const TArray<FCharmIdSlot>& customizationCharms) {
    return true;
}

void ADBDPlayer::Server_SendSecondaryActionPressed_Implementation(bool fromCancelRequest) {
}
bool ADBDPlayer::Server_SendSecondaryActionPressed_Validate(bool fromCancelRequest) {
    return true;
}

void ADBDPlayer::Server_SendItemUseInput_Implementation(bool pressed) {
}
bool ADBDPlayer::Server_SendItemUseInput_Validate(bool pressed) {
    return true;
}

void ADBDPlayer::Server_SendItemUse_Implementation(bool use) {
}
bool ADBDPlayer::Server_SendItemUse_Validate(bool use) {
    return true;
}

void ADBDPlayer::Server_SendItemDropInput_Implementation(bool pressed) {
}
bool ADBDPlayer::Server_SendItemDropInput_Validate(bool pressed) {
    return true;
}

void ADBDPlayer::Server_SendInteractionInput_Implementation(bool pressed) {
}
bool ADBDPlayer::Server_SendInteractionInput_Validate(bool pressed) {
    return true;
}

void ADBDPlayer::Server_SendFastInteractionInput_Implementation(bool pressed) {
}
bool ADBDPlayer::Server_SendFastInteractionInput_Validate(bool pressed) {
    return true;
}

void ADBDPlayer::Server_SendAbilityInput_Implementation(bool pressed) {
}
bool ADBDPlayer::Server_SendAbilityInput_Validate(bool pressed) {
    return true;
}

void ADBDPlayer::Server_PlayerReady_Implementation() {
}
bool ADBDPlayer::Server_PlayerReady_Validate() {
    return true;
}

void ADBDPlayer::Server_OnInsaneSkillCheck_Implementation() {
}
bool ADBDPlayer::Server_OnInsaneSkillCheck_Validate() {
    return true;
}

void ADBDPlayer::Server_Drop_Implementation(ACollectable* item, const FVector& location, const FRotator& rotation, bool onDeath) {
}
bool ADBDPlayer::Server_Drop_Validate(ACollectable* item, const FVector& location, const FRotator& rotation, bool onDeath) {
    return true;
}

void ADBDPlayer::SecondaryActionInputPressed() {
}

void ADBDPlayer::ResetYawScale(float adjustTime) {
}

void ADBDPlayer::ResetPitchScale(float adjustTime) {
}

void ADBDPlayer::ResetMeshRelativeRotation() {
}

void ADBDPlayer::ResetMeshRelativePosition() {
}

void ADBDPlayer::ResetCamera() {
}

void ADBDPlayer::RemoveStatusEffect(UStatusEffect* statusEffect) {
}

void ADBDPlayer::Remotely_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData) {
}

UAnimMontage* ADBDPlayer::PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) {
    return NULL;
}

void ADBDPlayer::OnRep_Interactable() {
}

void ADBDPlayer::OnRep_DreamworldComponent() {
}

void ADBDPlayer::OnPickupStart(ADBDPlayer* target) {
}

void ADBDPlayer::OnPickupEnd(ADBDPlayer* target) {
}


void ADBDPlayer::OnLevelReadyToPlay_Implementation() {
}

void ADBDPlayer::OnIntroCompletedNative() {
}




void ADBDPlayer::OnHudVisibilityChangedNative(const bool isVisible) {
}


FString ADBDPlayer::OnGetCharacterName_Implementation() const {
    return TEXT("");
}


void ADBDPlayer::OnCurrentMontageComplete(UAnimMontage* MontageAsset, bool interrupted) {
}

void ADBDPlayer::OnCurrentMontageBlendingOut(UAnimMontage* MontageAsset, bool interrupted) {
}


void ADBDPlayer::OnBlindChargeEmptied() {
}

void ADBDPlayer::OnAnimInstanceChanged() {
}

void ADBDPlayer::OnAllPlayerLoaded() {
}

void ADBDPlayer::Multicast_SetRunVaultEnabled_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetRunVaultEnabled_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_SetReverseTraverseEnabled_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetReverseTraverseEnabled_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_SetMaxWalkSpeed_Implementation(float maxWalkSpeed) {
}
bool ADBDPlayer::Multicast_SetMaxWalkSpeed_Validate(float maxWalkSpeed) {
    return true;
}

void ADBDPlayer::Multicast_SetInteractingPlayer_Implementation(ADBDPlayer* interactingPlayer) {
}

void ADBDPlayer::Multicast_SetForceAuthoritativeMovement_Implementation(bool value) {
}
bool ADBDPlayer::Multicast_SetForceAuthoritativeMovement_Validate(bool value) {
    return true;
}

void ADBDPlayer::Multicast_SetEnableCapsuleDynamicResize_Implementation(bool enabled) {
}

void ADBDPlayer::Multicast_SetDebugSnapPoint_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetDebugSnapPoint_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_SetDebugPrintAvailableInteractions_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetDebugPrintAvailableInteractions_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_SetDebugCarry_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetDebugCarry_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_SetCustomization_Implementation(const TArray<FName>& customizationParts, const TArray<FCharmIdSlot>& customizationCharms) {
}
bool ADBDPlayer::Multicast_SetCustomization_Validate(const TArray<FName>& customizationParts, const TArray<FCharmIdSlot>& customizationCharms) {
    return true;
}

void ADBDPlayer::Multicast_SetContinuousPrintDebug_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetContinuousPrintDebug_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_SetAuthoritativeMovement_Implementation(bool enabled) {
}
bool ADBDPlayer::Multicast_SetAuthoritativeMovement_Validate(bool enabled) {
    return true;
}

void ADBDPlayer::Multicast_ServerResetMeshRelativeOffSet_Implementation() {
}
bool ADBDPlayer::Multicast_ServerResetMeshRelativeOffSet_Validate() {
    return true;
}

void ADBDPlayer::Multicast_ReplicateController_Implementation(AController* newController) {
}

void ADBDPlayer::Multicast_PlayMontage_Implementation(FAnimationMontageDescriptor animMontageID, float playRate) {
}
bool ADBDPlayer::Multicast_PlayMontage_Validate(FAnimationMontageDescriptor animMontageID, float playRate) {
    return true;
}

void ADBDPlayer::Multicast_OnInsaneSkillCheck_Implementation() {
}
bool ADBDPlayer::Multicast_OnInsaneSkillCheck_Validate() {
    return true;
}

void ADBDPlayer::Multicast_LeaveGame_Implementation(FGuid uniqueLeavingPlayerId) {
}
bool ADBDPlayer::Multicast_LeaveGame_Validate(FGuid uniqueLeavingPlayerId) {
    return true;
}

void ADBDPlayer::Multicast_InteractionRollResult_Implementation(bool rollResult) {
}
bool ADBDPlayer::Multicast_InteractionRollResult_Validate(bool rollResult) {
    return true;
}

void ADBDPlayer::Multicast_ConfirmItemDrop_Implementation(bool pressed) {
}
bool ADBDPlayer::Multicast_ConfirmItemDrop_Validate(bool pressed) {
    return true;
}

void ADBDPlayer::Local_NotifyMatchEnded_Implementation() {
}

bool ADBDPlayer::Local_IsInteractionInputPressed(EInputInteractionType interactionType) const {
    return false;
}

bool ADBDPlayer::K2_SetActorLocationByBottomCapsule(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult) {
    return false;
}

void ADBDPlayer::ItemUseReleased() {
}

void ADBDPlayer::ItemUsePressed() {
}

void ADBDPlayer::ItemDropReleased() {
}

void ADBDPlayer::ItemDropPressed() {
}

bool ADBDPlayer::IsStrafing() const {
    return false;
}

bool ADBDPlayer::IsSnappingRotation() const {
    return false;
}

bool ADBDPlayer::IsSnappingPosition() const {
    return false;
}

bool ADBDPlayer::IsSnapping() const {
    return false;
}

bool ADBDPlayer::IsRunningAndMoving() const {
    return false;
}

bool ADBDPlayer::IsRunning() const {
    return false;
}

bool ADBDPlayer::IsPlayingMontage(FAnimationMontageDescriptor animMontageID) const {
    return false;
}

bool ADBDPlayer::IsPlayingAnyMontage() const {
    return false;
}

bool ADBDPlayer::IsMoving() const {
    return false;
}

bool ADBDPlayer::IsLocationClear(FVector targetPosition) const {
    return false;
}

bool ADBDPlayer::IsLocallyObserved() const {
    return false;
}

bool ADBDPlayer::IsInTerrorRadius() const {
    return false;
}

bool ADBDPlayer::IsInteractionInputPressed(EInputInteractionType interactionType) const {
    return false;
}

bool ADBDPlayer::IsInStalkMode() const {
    return false;
}

bool ADBDPlayer::IsInsideCloset() const {
    return false;
}

bool ADBDPlayer::IsInParadise() const {
    return false;
}

bool ADBDPlayer::IsInMeathookZone() const {
    return false;
}

bool ADBDPlayer::IsIncapacitated() const {
    return false;
}

bool ADBDPlayer::IsInBasement() const {
    return false;
}

bool ADBDPlayer::IsHeadHidden() const {
    return false;
}

bool ADBDPlayer::IsFacing(FVector direction) const {
    return false;
}

bool ADBDPlayer::IsExhausted() const {
    return false;
}

bool ADBDPlayer::IsCrouchPressed() const {
    return false;
}

bool ADBDPlayer::IsCrouching() const {
    return false;
}

bool ADBDPlayer::IsCloaked() const {
    return false;
}

bool ADBDPlayer::IsBeingInterrupted() const {
    return false;
}

bool ADBDPlayer::IsAllowedNavigation() const {
    return false;
}

bool ADBDPlayer::IsAIControlled() const {
    return false;
}

void ADBDPlayer::InteractionInputReleased() {
}

void ADBDPlayer::InteractionInputPressed() {
}

void ADBDPlayer::Input_ToggleCrouch() {
}

void ADBDPlayer::HideHead(bool hide) {
}

bool ADBDPlayer::HasTrapImmunity() const {
    return false;
}

bool ADBDPlayer::HasMoveInput() const {
    return false;
}

bool ADBDPlayer::HasDamageImmunity() const {
    return false;
}

bool ADBDPlayer::HasClearPathToTargetWithIgnore(FVector targetPosition, const TArray<AActor*>& ignoreActors) const {
    return false;
}

bool ADBDPlayer::HasClearPathToTarget(FVector targetPosition) const {
    return false;
}

bool ADBDPlayer::HasClearPathToItemDropOffPosition() const {
    return false;
}

bool ADBDPlayer::HasAnimMontageEnded() const {
    return false;
}

float ADBDPlayer::GetTunableValue(FName key, float defaultValue, bool warnIfRowMissing) const {
    return 0.0f;
}

ADBDPlayerController* ADBDPlayer::GetSharedPlayerController_Implementation() const {
    return NULL;
}

bool ADBDPlayer::GetRunVaultEnabled() const {
    return false;
}

bool ADBDPlayer::GetReverseTraverseEnabled() const {
    return false;
}

FRotator ADBDPlayer::GetRepControlRotation() const {
    return FRotator{};
}

float ADBDPlayer::GetRemainingTrapImmunityDuration() const {
    return 0.0f;
}

EPlayerTeam ADBDPlayer::GetPlayerTeam() const {
    return EPlayerTeam::VE_None;
}

EPlayerRole ADBDPlayer::GetPlayerRole() const {
    return EPlayerRole::VE_None;
}

UPlayerInteractionHandler* ADBDPlayer::GetPlayerInteractionHandler() const {
    return NULL;
}

FRotator ADBDPlayer::GetPlayerDirection() const {
    return FRotator{};
}

ADBDPlayerController* ADBDPlayer::GetPlayerController() const {
    return NULL;
}

UCameraComponent* ADBDPlayer::GetPlayerCamera() const {
    return NULL;
}

UBoxOcclusionQueryComponent* ADBDPlayer::GetPixelCounter() {
    return NULL;
}

UPerkManager* ADBDPlayer::GetPerkManager() const {
    return NULL;
}

float ADBDPlayer::GetPercentPixelsVisible() const {
    return 0.0f;
}

float ADBDPlayer::GetPercentMovementSpeed() const {
    return 0.0f;
}

EPawnType ADBDPlayer::GetPawnType() const {
    return EPawnType::VE_None;
}

UOtherCharactersVerticalCollisionsHandler* ADBDPlayer::GetOtherCharactersVerticalCollisionsHandler() const {
    return NULL;
}

UGameplayTagContainerComponent* ADBDPlayer::GetObjectState() const {
    return NULL;
}

bool ADBDPlayer::GetNearbyGroundLocation(FVector& groundLocation) {
    return false;
}

FString ADBDPlayer::GetNameDebugString() const {
    return TEXT("");
}

UMontagePlayer* ADBDPlayer::GetMontagePlayer() const {
    return NULL;
}

FMontagePlaybackDefinition ADBDPlayer::GetMontagePlaybackDefinition(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) const {
    return FMontagePlaybackDefinition{};
}

float ADBDPlayer::GetMontageLength(FAnimationMontageDescriptor animMontageID) const {
    return 0.0f;
}

UAnimMontage* ADBDPlayer::GetMontage(FAnimationMontageDescriptor animMontageID) const {
    return NULL;
}

FVector ADBDPlayer::GetMeshFeetPosition() const {
    return FVector{};
}

float ADBDPlayer::GetMaxSpeed() const {
    return 0.0f;
}

float ADBDPlayer::GetLuck() const {
    return 0.0f;
}

FVector ADBDPlayer::GetLastSafeLocation() const {
    return FVector{};
}

TArray<UItemModifier*> ADBDPlayer::GetItemModifiers() const {
    return TArray<UItemModifier*>();
}

USceneComponent* ADBDPlayer::GetItemDropOffTransform() const {
    return NULL;
}

TArray<UItemAddon*> ADBDPlayer::GetItemAddons() const {
    return TArray<UItemAddon*>();
}

bool ADBDPlayer::GetIsInterrupting() const {
    return false;
}

bool ADBDPlayer::GetIsInteracting() const {
    return false;
}

bool ADBDPlayer::GetIsInFirstPerson() const {
    return false;
}

bool ADBDPlayer::GetIsBeyondCrouchWalkSpeed() const {
    return false;
}

bool ADBDPlayer::GetInteractionRollResult() const {
    return false;
}

FInteractionPlayerProperties ADBDPlayer::GetInteractionPlayerProperties() {
    return FInteractionPlayerProperties{};
}

UInteractionDetectorComponent* ADBDPlayer::GetInteractionDetectorComponent() const {
    return NULL;
}

AInteractable* ADBDPlayer::GetInteractable() const {
    return NULL;
}

ADBDPlayer* ADBDPlayer::GetGuidingPlayer() const {
    return NULL;
}

float ADBDPlayer::GetGrassEffectRadiusMultiplier_Implementation() const {
    return 0.0f;
}

bool ADBDPlayer::GetForceDisableSkillChecks() const {
    return false;
}

UActorComponent* ADBDPlayer::GetFirstComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const {
    return NULL;
}

FVector ADBDPlayer::GetFeetPositionAtTargetLocation(FVector location) const {
    return FVector{};
}

FVector ADBDPlayer::GetFeetPosition() const {
    return FVector{};
}

bool ADBDPlayer::GetFeetOnGround() const {
    return false;
}

UCharacterDreamworldComponent* ADBDPlayer::GetDreamworldComponent() const {
    return NULL;
}

UPrimitiveComponent* ADBDPlayer::GetDetectionZone(EDetectionZone detectionZoneID) const {
    return NULL;
}

bool ADBDPlayer::GetDebugPrintAvailableInteractions() const {
    return false;
}

bool ADBDPlayer::GetDebugFailAllInteractions() const {
    return false;
}

ADBDPlayerState* ADBDPlayer::GetDBDPlayerState() const {
    return NULL;
}

UCustomizedSkeletalMesh* ADBDPlayer::GetCustomizedSkeletalMesh_Implementation() {
    return NULL;
}

EInteractionAnimation ADBDPlayer::GetCurrentInteractionAnimation() const {
    return EInteractionAnimation::VE_None;
}

UInteractionDefinition* ADBDPlayer::GetCurrentInteraction() const {
    return NULL;
}

bool ADBDPlayer::GetContinuousPrintDebug() const {
    return false;
}

UChaseComponent* ADBDPlayer::GetChaseComponent() const {
    return NULL;
}

float ADBDPlayer::GetChargeableInteractionMultiplier() const {
    return 0.0f;
}

UCharacterInventoryComponent* ADBDPlayer::GetCharacterInventoryComponent() const {
    return NULL;
}

ADBDPlayerCameraManager* ADBDPlayer::GetCameraManager() const {
    return NULL;
}

float ADBDPlayer::GetCameraCharacterYawDiff() const {
    return 0.0f;
}

FVector ADBDPlayer::GetBoneRelativeLocation(FName targetBone, FName relativeBone) const {
    return FVector{};
}

FVector ADBDPlayer::GetBoneLocation(FName name, TEnumAsByte<EBoneSpaces::Type> space) const {
    return FVector{};
}

UBlindableComponent* ADBDPlayer::GetBlindableComponent() const {
    return NULL;
}

float ADBDPlayer::GetBaseFOV() const {
    return 0.0f;
}

FVector ADBDPlayer::GetAverageVelocity() const {
    return FVector{};
}

UAuthoritativeMovementComponent* ADBDPlayer::GetAuthoritativeMovementComponent() const {
    return NULL;
}

USceneComponent* ADBDPlayer::GetAttachPoint_Implementation(FName attachPointName) const {
    return NULL;
}

APlayerState* ADBDPlayer::GetAssociatedPlayerState_Implementation() const {
    return NULL;
}

void ADBDPlayer::GetAnimTags(TArray<FName>& outTags) const {
}

UAnimInstance* ADBDPlayer::GetAnimInstance() const {
    return NULL;
}

FAnimData ADBDPlayer::GetAnimData() {
    return FAnimData{};
}

FVector ADBDPlayer::GetAlmostCurrentVelocity() const {
    return FVector{};
}

FVector ADBDPlayer::GetActorLocationFromFeetLocation(const FVector FeetLocation) const {
    return FVector{};
}

FVector ADBDPlayer::FindFurthestClearLocationBetweenPoints(FVector startPosition, FVector targetPosition) const {
    return FVector{};
}

ADBDPlayer* ADBDPlayer::FindClosestSlashablePlayerInDetectionZone(EDetectionZone detectionZoneID) const {
    return NULL;
}

ACharacter* ADBDPlayer::FindClosestSlashableCharacterInDetectionZone(EDetectionZone detectionZoneID) const {
    return NULL;
}

void ADBDPlayer::FastInteractionInputReleased() {
}

void ADBDPlayer::FastInteractionInputPressed() {
}


void ADBDPlayer::DetachInteractor() {
}

void ADBDPlayer::DebugPrint(const FString& InString) const {
}

void ADBDPlayer::DeactivateSkillChecks() {
}

void ADBDPlayer::DBDUnCrouch_Implementation() {
}

void ADBDPlayer::DBDLog(const FString& logText) {
}

void ADBDPlayer::DBDCrouch_Implementation() {
}

void ADBDPlayer::DBD_ToggleForceAuthoritativeMovement() {
}

void ADBDPlayer::DBD_ToggleDebugInteractionInZone() {
}

void ADBDPlayer::DBD_SetMouseTurnSpeedMultiplier(float value) {
}

void ADBDPlayer::DBD_SetMouseLookUpSpeedMultiplier(float value) {
}

void ADBDPlayer::DBD_SetForwardInputLock(bool isLocked) {
}

void ADBDPlayer::DBD_DebugStartInteraction() {
}

void ADBDPlayer::Client_TryInteractionType_Implementation(EInputInteractionType interactionType, ADBDPlayer* requester) {
}
bool ADBDPlayer::Client_TryInteractionType_Validate(EInputInteractionType interactionType, ADBDPlayer* requester) {
    return true;
}

void ADBDPlayer::Client_TryInteraction_Implementation(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence) {
}

void ADBDPlayer::Client_SendCancelInteraction_Implementation(const UInteractionDefinition* interactionDefinition) {
}
bool ADBDPlayer::Client_SendCancelInteraction_Validate(const UInteractionDefinition* interactionDefinition) {
    return true;
}

void ADBDPlayer::Client_QueueInteraction_Implementation(EInputInteractionType InteractionType, ADBDPlayer* Requester, float queuedTimer) {
}
bool ADBDPlayer::Client_QueueInteraction_Validate(EInputInteractionType InteractionType, ADBDPlayer* Requester, float queuedTimer) {
    return true;
}

void ADBDPlayer::Client_ClearInteractionQueue_Implementation() {
}
bool ADBDPlayer::Client_ClearInteractionQueue_Validate() {
    return true;
}

bool ADBDPlayer::CanInterrupt_BP_Implementation() const {
    return false;
}

bool ADBDPlayer::CanInteractWithItems() const {
    return false;
}

bool ADBDPlayer::CanInteract() {
    return false;
}

void ADBDPlayer::CancelCarry(bool alsoCancelForOtherPlayer) {
}

bool ADBDPlayer::CanBeBlinded() const {
    return false;
}

void ADBDPlayer::CameraUpdated() {
}

void ADBDPlayer::Broadcast_PlayMontage_Server_Implementation(FAnimationMontageDescriptor animMontageID, float playRate) {
}
bool ADBDPlayer::Broadcast_PlayMontage_Server_Validate(FAnimationMontageDescriptor animMontageID, float playRate) {
    return true;
}

void ADBDPlayer::Broadcast_PlayMontage_Multicast_Implementation(FAnimationMontageDescriptor animMontageID, float playRate) {
}
bool ADBDPlayer::Broadcast_PlayMontage_Multicast_Validate(FAnimationMontageDescriptor animMontageID, float playRate) {
    return true;
}

bool ADBDPlayer::Authority_TryForceEndOngoingScoreEvent(EDBDScoreTypes scoreType) {
    return false;
}

bool ADBDPlayer::Authority_TryForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType) {
    return false;
}

void ADBDPlayer::Authority_SetDreamworldComponent(UCharacterDreamworldComponent* component) {
}

void ADBDPlayer::Authority_RequestStun(EStunType stunType, ADBDPlayer* stunner) {
}

void ADBDPlayer::Authority_RemoveStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID) {
}

UStatusEffect* ADBDPlayer::Authority_ImposeStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime) {
    return NULL;
}

UStatusEffect* ADBDPlayer::Authority_ImposeDynamicStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect) {
    return NULL;
}

void ADBDPlayer::Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData) {
}

void ADBDPlayer::Authority_EvaluateIfPlayerCanSee() {
}

void ADBDPlayer::Authority_EndStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID) {
}

void ADBDPlayer::Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag) {
}

void ADBDPlayer::Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag) {
}

void ADBDPlayer::Authority_ActivateAuthoritativeMovementOnDropped() {
}

void ADBDPlayer::AttachInteractor(UInteractor* interactor) {
}

void ADBDPlayer::AddDetectionZone(EDetectionZone detectionZoneID, UPrimitiveComponent* zone) {
}

void ADBDPlayer::AbilityInputReleased() {
}

void ADBDPlayer::AbilityInputPressed() {
}

void ADBDPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADBDPlayer, _interactable);
    DOREPLIFETIME(ADBDPlayer, _dreamworldComponent);
    DOREPLIFETIME(ADBDPlayer, _screenAspectRatio);
}

ADBDPlayer::ADBDPlayer() {
    this->AllowInterrupting = false;
    this->MinFallHeight = 50.00f;
    this->IsInterruptable = false;
    this->AllowNavigationInput = false;
    this->AllowNavigationBackwardInput = true;
    this->AllowTurningInput = false;
    this->AllowPitchInput = false;
    this->AllowStrafeInput = true;
    this->IsInInteractionUpdate = false;
    this->IsInteractionChargeCompleted = false;
    this->PitchLimitLower = -40.00f;
    this->PitchLimitUpper = 40.00f;
    this->PelvisHeight = 1.00f;
    this->PelvisHeightForPounceOnStandingCamper = 0.50f;
    this->PelvisHeightForPounceOnCrouchingCamper = 0.00f;
    this->CameraBoom = NULL;
    this->ForceSkillChecks = false;
    this->CameraResetSpeed = 2.25f;
    this->AverageSpeedBufferTime = 0.00f;
    this->AlmostCurrentSpeedBufferTime = 0.00f;
    this->GamepadYawCurve = NULL;
    this->GamepadPitchCurve = NULL;
    this->GamepadSettingToYawRateCurve = NULL;
    this->GamepadSettingToPitchRateCurve = NULL;
    this->JoyconSettingToYawRateCurve = NULL;
    this->JoyconSettingToPitchRateCurve = NULL;
    this->Camera = NULL;
    this->MaterialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelperNative"));
    this->Interactable = NULL;
    this->_characterInventoryComponent = CreateDefaultSubobject<UCharacterInventoryComponent>(TEXT("CharacterInventoryComponent"));
    this->CarryJointName = TEXT("Camper_SocketLT");
    this->_pitchOffsetForInteractionPriority = 0.00f;
    this->_renderedPixelCounter = CreateDefaultSubobject<UBoxOcclusionQueryComponent>(TEXT("RenderedPixelCounter"));
    this->_standingOcclusionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Standing Occlusion Box"));
    this->_crouchingOcclusionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Crouching Occlusion Box"));
    this->_activator = CreateDefaultSubobject<UActivatorComponent>(TEXT("Activator"));
    this->IsInteracting = false;
    this->_aiCanBeSeenTestCrouchScale = 0.70f;
    this->_aiCanBeSeenTestRightOffset = 15.00f;
    this->_aiCanBeSeenTestHighOffset = 25.00f;
    this->_aiCanBeSeenTestLowOffset = 10.00f;
    this->ClearPathTestRadiusMultiplier = 0.99f;
    this->ClearPathTestHeightMultiplier = 0.90f;
    this->LocationClearTestRadiusMultiplier = 0.90f;
    this->LocationClearTestHeightMultiplier = 0.90f;
    this->ClearPathTestStepHeight = 20.00f;
    this->MouseTurnSpeedMultiplier = 1.00f;
    this->MouseLookUpSpeedMultiplier = 1.00f;
    this->DeathSound = NULL;
    this->CurrentCamperState = ECamperState::VE_None;
    this->_stateMachine = NULL;
    this->_interactionHandler = CreateDefaultSubobject<UPlayerInteractionHandler>(TEXT("InteractionHandler"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("MontagePlayer"));
    this->_perkManager = CreateDefaultSubobject<UPerkManager>(TEXT("PerkManager"));
    this->_playerData = NULL;
    this->_wiggleAxisFlickMasher = NULL;
    this->_interactable = NULL;
    this->_guidingPlayer = NULL;
    this->_interactingPlayer = NULL;
    this->_nextAttackSubstate = EAttackSubstate::VE_None;
    this->_dreamworldComponent = NULL;
    this->_characterChaseVisualComponent = CreateDefaultSubobject<UCharacterChaseVisualComponent>(TEXT("CharacterChaseVisualComponent"));
    this->_cameraHandlerComponent = CreateDefaultSubobject<UCameraHandlerComponent>(TEXT("CameraHandlerComponent"));
    this->_reversibleActionSystemComponent = CreateDefaultSubobject<UReversibleActionSystemComponent>(TEXT("ActionSystemComponent"));
    this->_itemDropOffPosition = CreateDefaultSubobject<USceneComponent>(TEXT("ItemDropOffPosition"));
    this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->_blindingChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("BlindnessChargeableComponent"));
    this->_shouldUpdateStateMachineDriverOnPossessed = true;
    this->_blindableComponent = CreateDefaultSubobject<UBlindableComponent>(TEXT("BlindableComponent"));
    this->_tutorialChargeableInteractionMultiplier = 1.00f;
    this->_eventListener = CreateDefaultSubobject<UPollableEventListener>(TEXT("EventListener"));
    this->_chaseComponent = CreateDefaultSubobject<UChaseComponent>(TEXT("Chase Component"));
    this->_meatHookZoneDetector = CreateDefaultSubobject<UZoneDetectorComponent>(TEXT("MeatHookZoneDetector"));
    this->_basementZoneDetector = CreateDefaultSubobject<UZoneDetectorComponent>(TEXT("BasementZoneDetector"));
    this->_bookmarkedInteraction = NULL;
    this->_authoritativeMovementComponent = CreateDefaultSubobject<UAuthoritativeMovementComponent>(TEXT("AuthoritativeMovement"));
    this->_screenAspectRatio = 1.78f;
    this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("ObjectState"));
    this->_audioFXComponent = CreateDefaultSubobject<UAudioFXComponent>(TEXT("AudioFXComponent"));
    this->_playerPerspectiveComponent = CreateDefaultSubobject<UPlayerPerspectiveComponent>(TEXT("PlayerPerspectiveComponent"));
    this->_characterSightComponent = CreateDefaultSubobject<UCharacterSightComponent>(TEXT("CharacterSightComponent"));
    this->_characterSightableComponent = CreateDefaultSubobject<UCharacterSightableComponent>(TEXT("CharacterSightableComponent"));
    this->_interactionDetectorComponent = CreateDefaultSubobject<UInteractionDetectorComponent>(TEXT("InteractionDetectorComponent"));
    this->_clippablePrimitivesRegistererComponent = CreateDefaultSubobject<UPrimitivesRegistererComponent>(TEXT("PrimitiveRegistererComponent"));
    this->_clippableProviderComponent = CreateDefaultSubobject<UClippableProviderComponent>(TEXT("ClippableProviderComponent"));
    this->_dynCapsuleResizer = CreateDefaultSubobject<UDynamicCapsuleResizerComponent>(TEXT("Dyn Capsule Resizer"));
    this->_playerGameRelevancyComponent = CreateDefaultSubobject<UPlayerGameRelevancyComponent>(TEXT("PlayerGameRelevancyComponent"));
    this->_contextualQuestComponent = CreateDefaultSubobject<UContextualQuestComponent>(TEXT("ContextualQuestComponent"));
    this->_questEventHandler = NULL;
    this->_presentationChargeableProgressComponent = CreateDefaultSubobject<UChargeableProgressProviderComponent>(TEXT("Presentation Chargeable Progress"));
    this->_currentGamepadYawCurve = NULL;
    this->_currentGamepadPitchCurve = NULL;
    this->_associatedPlayerStateCache = NULL;
    this->_otherCharactersVerticalCollisionsHandler = CreateDefaultSubobject<UOtherCharactersVerticalCollisionsHandler>(TEXT("OtherCharactersVerticalCollisionsHandler"));
}

