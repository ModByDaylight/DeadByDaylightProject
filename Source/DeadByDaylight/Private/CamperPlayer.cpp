#include "CamperPlayer.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;
class ADBDPlayer;
class APawn;
class AActor;
class UPrimitiveComponent;
class UCamperAnimInstance;
class UTerrorRadiusReceiverComponent;
class UScreamComponent;
class AReverseBearTrap;
class UAkComponent;
class UAnimationMontageSlave;
class UCamperHealthComponent;
class UMoveComponentToComponent;
class UHookableComponent;
class UDBDClipRegionComponent;
class UChaseeCharacterComponent;
class UCamperStillnessTrackerComponent;
class UDBDCamperData;
class UCameraAttachmentComponent;
class UCamperBloodTrailComponent;
class UInteractionDefinition;

void ACamperPlayer::UpdateKillerDistanceEvent(float deltaSeconds) {
}

void ACamperPlayer::UpdateHealingTimer(float deltaTime) {
}



void ACamperPlayer::TriggerAfflictionHUDFeedback() {
}

void ACamperPlayer::StopHealingTimer() {
}

void ACamperPlayer::StartHealingTimer(float time) {
}


void ACamperPlayer::SetRevealedSurvivor(ACamperPlayer* survivor) {
}


void ACamperPlayer::SetIsSkillCheckFailed(bool isSkillCheckFailed) {
}

void ACamperPlayer::SetIsHealingKOCamper(bool isHealingKOCamper) {
}

void ACamperPlayer::SetImmobilized(ECamperImmobilizeState state) {
}

void ACamperPlayer::SetGuidedActionLocal(ECamperGuidedAction action) {
}

void ACamperPlayer::SetGuidedAction(ECamperGuidedAction action) {
}

void ACamperPlayer::SetBeingCarried(bool NewIsBeingCarried, ADBDPlayer* carrier) {
}

void ACamperPlayer::SetAutoInteractionMashEnabled(bool enabled) {
}

void ACamperPlayer::Server_SetRunInput_Implementation(bool pressed) {
}
bool ACamperPlayer::Server_SetRunInput_Validate(bool pressed) {
    return true;
}

void ACamperPlayer::Server_SetOverlappingEscape_Implementation(AActor* NewEscape) {
}
bool ACamperPlayer::Server_SetOverlappingEscape_Validate(AActor* NewEscape) {
    return true;
}

void ACamperPlayer::Server_SetImmobilized_Implementation(ECamperImmobilizeState state) {
}
bool ACamperPlayer::Server_SetImmobilized_Validate(ECamperImmobilizeState state) {
    return true;
}

void ACamperPlayer::Server_SendLeftRightMashedInput_Implementation(bool pressed) {
}
bool ACamperPlayer::Server_SendLeftRightMashedInput_Validate(bool pressed) {
    return true;
}

void ACamperPlayer::Server_SendInteractMashedInput_Implementation(bool pressed) {
}
bool ACamperPlayer::Server_SendInteractMashedInput_Validate(bool pressed) {
    return true;
}

void ACamperPlayer::RunLocked(bool lock) {
}

void ACamperPlayer::ResetPotentialSaviors() {
}

void ACamperPlayer::ResetCameraAttach() {
}


void ACamperPlayer::OnUnhooked() {
}

void ACamperPlayer::OnRep_SprintEffect() {
}

void ACamperPlayer::OnRep_RunInputPressed() {
}

void ACamperPlayer::OnProximityEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}


void ACamperPlayer::OnPickUpEnter(ADBDPlayer* picker, float transitionTime) {
}

void ACamperPlayer::OnPickUpDenied() {
}

void ACamperPlayer::OnPawnSensed(APawn* pawn) {
}

void ACamperPlayer::OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession) {
}

void ACamperPlayer::OnHpSlotSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange) {
}


void ACamperPlayer::OnHooked() {
}

void ACamperPlayer::OnHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

void ACamperPlayer::OnFinishedPlaying() {
}

void ACamperPlayer::OnDroppedStart() {
}

void ACamperPlayer::OnDroppedEnd(bool clearLeader) {
}



void ACamperPlayer::Multicast_SetOverlappingEscape_Implementation(AActor* NewEscape) {
}

void ACamperPlayer::Multicast_SetImmobilized_Implementation(ECamperImmobilizeState state) {
}
bool ACamperPlayer::Multicast_SetImmobilized_Validate(ECamperImmobilizeState state) {
    return true;
}

void ACamperPlayer::Multicast_SetHookEscapeAutoFail_Implementation(bool enabled) {
}
bool ACamperPlayer::Multicast_SetHookEscapeAutoFail_Validate(bool enabled) {
    return true;
}

void ACamperPlayer::Multicast_SetGuidedAction_Implementation(ECamperGuidedAction action) {
}
bool ACamperPlayer::Multicast_SetGuidedAction_Validate(ECamperGuidedAction action) {
    return true;
}

void ACamperPlayer::Multicast_SetAuthoritativeMovementFlag_Implementation(EAuthoritativeMovementFlag flag, bool value) {
}
bool ACamperPlayer::Multicast_SetAuthoritativeMovementFlag_Validate(EAuthoritativeMovementFlag flag, bool value) {
    return true;
}

void ACamperPlayer::Multicast_RemoveReverseBearTrap_Implementation() {
}
bool ACamperPlayer::Multicast_RemoveReverseBearTrap_Validate() {
    return true;
}

void ACamperPlayer::MoveToOwnerCarryJoint() {
}



void ACamperPlayer::Local_SetImmobilized(ECamperImmobilizeState state) {
}

void ACamperPlayer::Kill(bool sacrificed, bool left) {
}


bool ACamperPlayer::IsUnintentionallyImmobilized() const {
    return false;
}

bool ACamperPlayer::IsUnhookingSelf() const {
    return false;
}

bool ACamperPlayer::IsTrapped() const {
    return false;
}

bool ACamperPlayer::IsSacrificed() const {
    return false;
}

bool ACamperPlayer::IsRunLocked() {
    return false;
}

bool ACamperPlayer::IsObsessionTarget() const {
    return false;
}

bool ACamperPlayer::IsMovementGuided() const {
    return false;
}

bool ACamperPlayer::IsInNeed() const {
    return false;
}

bool ACamperPlayer::IsInDeathBed() const {
    return false;
}

bool ACamperPlayer::IsImmobilized() const {
    return false;
}

bool ACamperPlayer::IsHooked() const {
    return false;
}

bool ACamperPlayer::IsHealingTimerExpired() const {
    return false;
}

bool ACamperPlayer::IsGuidedBySlasher() const {
    return false;
}

bool ACamperPlayer::IsEscaped() const {
    return false;
}

bool ACamperPlayer::IsDeadOrInParadise() const {
    return false;
}

bool ACamperPlayer::IsCrawling() const {
    return false;
}

bool ACamperPlayer::IsBeingUnhooked() const {
    return false;
}

bool ACamperPlayer::IsBeingPutOnHook() const {
    return false;
}

bool ACamperPlayer::IsBeingPutDown() const {
    return false;
}

bool ACamperPlayer::IsBeingPulledFromCloset() const {
    return false;
}

bool ACamperPlayer::IsBeingPickedUp() const {
    return false;
}

bool ACamperPlayer::IsBeingMended() const {
    return false;
}

bool ACamperPlayer::IsBeingKilled() const {
    return false;
}

bool ACamperPlayer::IsBeingInteractedWith() const {
    return false;
}

bool ACamperPlayer::IsBeingHealed() const {
    return false;
}

bool ACamperPlayer::IsBeingEndGameSacrificed() const {
    return false;
}

bool ACamperPlayer::IsBeingCarried() const {
    return false;
}

void ACamperPlayer::Input_Wiggle(float input) {
}

void ACamperPlayer::Input_ToggleRun() {
}

void ACamperPlayer::HatchEscapeZoneEntered(AActor* NewEscape) {
}

bool ACamperPlayer::HasReverseBearTrap() const {
    return false;
}

bool ACamperPlayer::HasHitEvents() const {
    return false;
}

bool ACamperPlayer::HasGuidedAction() const {
    return false;
}


FRotator ACamperPlayer::GetToAimPointRotation() const {
    return FRotator{};
}

UTerrorRadiusReceiverComponent* ACamperPlayer::GetTerrorRadiusReceiverComponent() const {
    return NULL;
}

float ACamperPlayer::GetStillness() const {
    return 0.0f;
}

UScreamComponent* ACamperPlayer::GetScreamComponent() const {
    return NULL;
}

AReverseBearTrap* ACamperPlayer::GetReverseBearTrap() const {
    return NULL;
}

ACamperPlayer* ACamperPlayer::GetRevealedSurvivor() const {
    return NULL;
}

float ACamperPlayer::GetPercentHealingTimer() const {
    return 0.0f;
}

AActor* ACamperPlayer::GetOverlappingEscape() const {
    return NULL;
}

float ACamperPlayer::GetObsessionTargetWeight() const {
    return 0.0f;
}

int32 ACamperPlayer::GetNumberOfEntityRenderRegions() const {
    return 0;
}

UAkComponent* ACamperPlayer::GetNoOcclusionAudioComponent() const {
    return NULL;
}

UAnimationMontageSlave* ACamperPlayer::GetMontageFollower() {
    return NULL;
}

UMoveComponentToComponent* ACamperPlayer::GetMeshMover() const {
    return NULL;
}

float ACamperPlayer::GetMaxGruntDistance(bool isLocalPlayerKiller) const {
    return 0.0f;
}

bool ACamperPlayer::GetIsSkillCheckFailed() {
    return false;
}

bool ACamperPlayer::GetIsHealingKOCamper() {
    return false;
}

bool ACamperPlayer::GetIsBeingDissolved() const {
    return false;
}

ECamperImmobilizeState ACamperPlayer::GetImmobilizedState() const {
    return ECamperImmobilizeState::VE_None;
}

UHookableComponent* ACamperPlayer::GetHookableComponent() const {
    return NULL;
}

UCamperHealthComponent* ACamperPlayer::GetHealthComponent() const {
    return NULL;
}

ECamperGuidedAction ACamperPlayer::GetGuidedAction() const {
    return ECamperGuidedAction::VE_None;
}

UDBDClipRegionComponent* ACamperPlayer::GetEntityRenderRegionAtIndex(int32 InIndex) const {
    return NULL;
}

float ACamperPlayer::GetDropStaggerTimeLeft() const {
    return 0.0f;
}

float ACamperPlayer::GetDropStaggerPercentTimeElapsed() const {
    return 0.0f;
}

UChaseeCharacterComponent* ACamperPlayer::GetChaseeCharacterComponent() const {
    return NULL;
}

UCamperStillnessTrackerComponent* ACamperPlayer::GetCamperStillnessComponent() {
    return NULL;
}

UDBDCamperData* ACamperPlayer::GetCamperData() const {
    return NULL;
}

UCamperAnimInstance* ACamperPlayer::GetCamperAnimInstance() const {
    return NULL;
}

UCameraAttachmentComponent* ACamperPlayer::GetCameraAttachmentComponent() const {
    return NULL;
}

UCamperBloodTrailComponent* ACamperPlayer::GetBloodTrailComponent() const {
    return NULL;
}

TArray<UDBDClipRegionComponent*> ACamperPlayer::GetAllEntityRenderRegions() const {
    return TArray<UDBDClipRegionComponent*>();
}

FVector ACamperPlayer::GetAimPoint() const {
    return FVector{};
}


void ACamperPlayer::EscapeTutorial() {
}

void ACamperPlayer::Escape(AActor* NewEscape, EEscapeType escapeType) {
}


void ACamperPlayer::DetachFromGuidingPlayer() {
}



void ACamperPlayer::DBD_SetImmobilized(ECamperImmobilizeState state) {
}

void ACamperPlayer::DBD_LeaveParadise() {
}

void ACamperPlayer::DBD_ForceRun(bool forced) {
}

void ACamperPlayer::DBD_CheatEscaped() {
}

void ACamperPlayer::DBD_AutoLeftRightMash(bool enabled) {
}

void ACamperPlayer::DBD_AutoInteractionMash(bool enabled) {
}

float ACamperPlayer::ComputeInteractionSuccessPercentage(const UInteractionDefinition* interaction) {
    return 0.0f;
}

bool ACamperPlayer::ComputeHookEscapeResult() {
    return false;
}

bool ACamperPlayer::ComputeBeartrapEscapeResult() {
    return false;
}

void ACamperPlayer::Client_OnSlashedOutOfTrap_Implementation(ADBDPlayer* requester) {
}
bool ACamperPlayer::Client_OnSlashedOutOfTrap_Validate(ADBDPlayer* requester) {
    return true;
}

bool ACamperPlayer::CanRushQuietly() const {
    return false;
}

bool ACamperPlayer::CanBeShocked() const {
    return false;
}

bool ACamperPlayer::CanBePickedUp() const {
    return false;
}

bool ACamperPlayer::CanBeKilled() const {
    return false;
}

void ACamperPlayer::CallOnDroppedByBearTrap() {
}

void ACamperPlayer::Authority_OnSlashed(ADBDPlayer* attacker) {
}

void ACamperPlayer::Authority_DropItemAtLastSafePosition() {
}

void ACamperPlayer::AttachToGuidingPlayer() {
}







void ACamperPlayer::ActionInputReleased() {
}

void ACamperPlayer::ActionInputPressed() {
}

void ACamperPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACamperPlayer, _runInputPressed);
    DOREPLIFETIME(ACamperPlayer, _sprintEffect);
}

ACamperPlayer::ACamperPlayer() {
    this->InputMashCount = 1.00f;
    this->InputMashDecayTime = 1.00f;
    this->isBeingDissolved = false;
    this->FootprintAudibleRange = 1200.00f;
    this->CameraResetToleranceYaw = 2.00f;
    this->CameraResetTolerancePitch = 2.00f;
    this->CameraRecenterOffsetYaw = 90.00f;
    this->CameraRecenterOffsetPitch = 30.00f;
    this->Gender = EGender::VE_Male;
    this->DropStaggerDuration = NULL;
    this->DropStaggerMaxSpeed = NULL;
    this->TimeforDeathWhileCrawling = 60.00f;
    this->TimeforDeathWhileHooked = 60.00f;
    this->SecondsUntilFootprintTrigger = 0.10f;
    this->TriggerAfflictionHUDIntro = false;
    this->PartiallyHiddenStillnessThreshold = 0.00f;
    this->_escape = NULL;
    this->_overlappingEscape = NULL;
    this->CrouchCapsuleHalfHeight = 0.00f;
    this->IKOffsetRightFoot = 0.00f;
    this->IKOffsetLeftFoot = 0.00f;
    this->_bloodTrailSettings = NULL;
    this->_runInputPressed = false;
    this->_trapIndicatorActive = false;
    this->_noOcclusionAkComponent = NULL;
    this->_isHealingKOCamper = false;
    this->_isSkillCheckFailed = false;
    this->_isBeingSacrificed = false;
    this->_isWiggleProgressionAllowed = true;
    this->_sprintEffect = NULL;
}

