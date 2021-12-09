#include "SlasherPlayer.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;
class AActor;
class USceneComponent;
class ADBDPlayer;
class USlasherTREmitterComponent;
class UChaserCharacterComponent;

bool ASlasherPlayer::WasRecentlyCloaked() const {
    return false;
}

void ASlasherPlayer::UpdateRageTierEffect_Implementation(int32 previousTier, int32 currentTier) {
}



void ASlasherPlayer::SpawnSlasherPower_Implementation() {
}

bool ASlasherPlayer::ShouldTurnInPlaceRight() {
    return false;
}

bool ASlasherPlayer::ShouldTurnInPlaceLeft() {
    return false;
}

bool ASlasherPlayer::ShouldTurnInPlace() {
    return false;
}

bool ASlasherPlayer::ShouldApplyBloodlustSpeedModifier_Implementation() const {
    return false;
}

void ASlasherPlayer::SetSurvivorBeingKilled(ACamperPlayer* survivor) {
}

void ASlasherPlayer::SetStalkTierWalkSpeedMultiplier(float stalkTierWalkSpeedMultiplier) {
}

void ASlasherPlayer::SetLightIntensity(float intensity) {
}

void ASlasherPlayer::SetIsKilling(bool NewIsKilling) {
}

void ASlasherPlayer::SetIsHookingSurvivor(const bool value) {
}

void ASlasherPlayer::SetGuidedAction(ESlasherGuidedAction action) {
}

void ASlasherPlayer::SetChainsawSprinting(bool chainsawSprinting) {
}

void ASlasherPlayer::SetCarriedCamper(ACamperPlayer* camper) {
}

void ASlasherPlayer::SetAttackZonePivot(USceneComponent* attackZonePivot) {
}


void ASlasherPlayer::Server_SendAttackInput_Implementation(bool pressed) {
}
bool ASlasherPlayer::Server_SendAttackInput_Validate(bool pressed) {
    return true;
}

void ASlasherPlayer::ResetNeutralIdleRotationYaw() {
}


void ASlasherPlayer::OnSurvivorsLeftChanged(int32 survivorRemaining) {
}

void ASlasherPlayer::OnSurvivorKilled(ACamperPlayer* playerToKill, bool consumeKill) {
}






void ASlasherPlayer::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction) {
}

void ASlasherPlayer::OnLoudNoiseIndicatorDestroyed() {
}

void ASlasherPlayer::OnKillerAbilityUpdateActivate_Implementation(EKillerAbilities killerAbility, float percent) {
}

void ASlasherPlayer::OnKillerAbilityEndDeactivate_Implementation(EKillerAbilities killerAbility, bool forced) {
}

void ASlasherPlayer::OnKillerAbilityEndActivate_Implementation(EKillerAbilities killerAbility) {
}

void ASlasherPlayer::OnKillerAbilityBeginDeactivate_Implementation(EKillerAbilities killerAbility, bool forced) {
}

void ASlasherPlayer::OnKillerAbilityBeginActivate_Implementation(EKillerAbilities killerAbility) {
}

void ASlasherPlayer::OnDropCamperEnd(ADBDPlayer* camper) {
}


void ASlasherPlayer::OnAttackStart(const EAttackType attackType) {
}

void ASlasherPlayer::OnAttackFinish(const EAttackType attackType) {
}

void ASlasherPlayer::Multicast_SetGuidedAction_Implementation(ESlasherGuidedAction action) {
}
bool ASlasherPlayer::Multicast_SetGuidedAction_Validate(ESlasherGuidedAction action) {
    return true;
}

void ASlasherPlayer::Multicast_SetAttackDetectionZoneSet_Implementation(EAttackZoneSet attackZoneSet) {
}

void ASlasherPlayer::Multicast_MergeLockOnDamageZones_Implementation(bool enable) {
}

void ASlasherPlayer::Multicast_DisplayAttackZones_Implementation(bool display) {
}


bool ASlasherPlayer::Local_CancelAttack_Implementation() {
    return false;
}

bool ASlasherPlayer::IsWalkLocked() {
    return false;
}

bool ASlasherPlayer::IsUncloaking_Implementation() const {
    return false;
}

bool ASlasherPlayer::IsOfferingAllowingKill(const ACamperPlayer* camper) const {
    return false;
}

bool ASlasherPlayer::IsKilling() const {
    return false;
}

bool ASlasherPlayer::IsInterruptBlocked() const {
    return false;
}

bool ASlasherPlayer::IsInBlinkCooldown() const {
    return false;
}

bool ASlasherPlayer::IsImmuneToObservingPlayerDetection_Implementation(const ADBDPlayer* observingPlayer) const {
    return false;
}

bool ASlasherPlayer::IsIdling() {
    return false;
}

bool ASlasherPlayer::IsHooking() const {
    return false;
}

bool ASlasherPlayer::IsCrouchAvailable_BP_Implementation() {
    return false;
}

bool ASlasherPlayer::IsCloaking_Implementation() const {
    return false;
}

bool ASlasherPlayer::IsChargingBlink() const {
    return false;
}

bool ASlasherPlayer::IsChainsawSprinting() const {
    return false;
}

bool ASlasherPlayer::IsChainBlinking() const {
    return false;
}

bool ASlasherPlayer::IsCarrying() const {
    return false;
}

bool ASlasherPlayer::IsASurvivorInTerrorRadius() const {
    return false;
}

bool ASlasherPlayer::IsAllowedToKill(const ACamperPlayer* camper) const {
    return false;
}

void ASlasherPlayer::IncrementInterruptBlock() {
}

bool ASlasherPlayer::HasPreLevelGenerationModifier(FName modifierID) const {
    return false;
}

bool ASlasherPlayer::HasKillerAbility(EKillerAbilities killerAbility) const {
    return false;
}

USlasherTREmitterComponent* ASlasherPlayer::GetTerrorRadiusEmitter() const {
    return NULL;
}

ACamperPlayer* ASlasherPlayer::GetSurvivorBeingKilled() const {
    return NULL;
}

FDateTime ASlasherPlayer::GetStillnessStartTime() const {
    return FDateTime{};
}

float ASlasherPlayer::GetStealthRatio() const {
    return 0.0f;
}

float ASlasherPlayer::GetStalkTierWalkSpeedMultiplier() const {
    return 0.0f;
}

FGameplayTagContainer ASlasherPlayer::GetSlasherAnimGameplayTags() const {
    return FGameplayTagContainer{};
}

int32 ASlasherPlayer::GetRageTier() const {
    return 0;
}

FGameplayTag ASlasherPlayer::GetPresenceTag() const {
    return FGameplayTag{};
}

FVector ASlasherPlayer::GetPlayerDropOffPoint_Implementation() const {
    return FVector{};
}

ACamperPlayer* ASlasherPlayer::GetObsessionTarget() const {
    return NULL;
}

FRotator ASlasherPlayer::GetLookRotation() const {
    return FRotator{};
}

float ASlasherPlayer::GetLightIntensity() const {
    return 0.0f;
}

bool ASlasherPlayer::GetIsAttacking() const {
    return false;
}

float ASlasherPlayer::GetIdleNeutralRotationYaw() {
    return 0.0f;
}

ESlasherGuidedAction ASlasherPlayer::GetGuidedAction() const {
    return ESlasherGuidedAction::VE_None;
}

float ASlasherPlayer::GetDifferenceBetweenIdleNeutralAndCurrentRotationYaw() {
    return 0.0f;
}

float ASlasherPlayer::GetCurrentRotationYaw() {
    return 0.0f;
}

UChaserCharacterComponent* ASlasherPlayer::GetChaserCharacterComponent() const {
    return NULL;
}


ACamperPlayer* ASlasherPlayer::GetCarriedCamper() const {
    return NULL;
}

float ASlasherPlayer::GetBlindedPercent() const {
    return 0.0f;
}

float ASlasherPlayer::GetAnimDirection() const {
    return 0.0f;
}


void ASlasherPlayer::DecrementInterruptBlock() {
}

void ASlasherPlayer::DBD_SetAttackZones(EAttackZoneSet attackZoneSet) {
}

void ASlasherPlayer::DBD_MergeLockOnDamageZones(bool enable) {
}

void ASlasherPlayer::DBD_DisplayAttackZones(bool display) {
}

void ASlasherPlayer::DBD_AllowKilling() {
}




void ASlasherPlayer::Client_RequestStun_Implementation(EStunType stunType, ADBDPlayer* stunner) {
}
bool ASlasherPlayer::Client_RequestStun_Validate(EStunType stunType, ADBDPlayer* stunner) {
    return true;
}

bool ASlasherPlayer::CanSlashAttack_BP_Implementation() const {
    return false;
}

bool ASlasherPlayer::CanPickupSurvivor() const {
    return false;
}

bool ASlasherPlayer::CanPerformKillerAbility_Implementation(EKillerAbilities killerAbility) const {
    return false;
}

bool ASlasherPlayer::CanGainRage_Implementation() const {
    return false;
}

bool ASlasherPlayer::CanEscapeCarry(ACamperPlayer* player) const {
    return false;
}

bool ASlasherPlayer::CancelAttackByInput() {
    return false;
}

bool ASlasherPlayer::CanAttack_BP_Implementation(const EAttackType attackType) const {
    return false;
}

bool ASlasherPlayer::CanAttack(const EAttackType attackType) const {
    return false;
}

bool ASlasherPlayer::CanAffectLocalPlayer() const {
    return false;
}

void ASlasherPlayer::BroadcastOnInstantTeleport() {
}

void ASlasherPlayer::BroadcastOffensiveAction() const {
}

void ASlasherPlayer::Authority_SetInStalkMode(bool stalkMode, bool forced) {
}

void ASlasherPlayer::Authority_HandleKillerInterruptingSurvivor(ADBDPlayer* target) {
}

void ASlasherPlayer::Authority_AttemptEscapeCarry(ACamperPlayer* player) {
}

void ASlasherPlayer::Authority_AllowKilling(int32 numKills) {
}

void ASlasherPlayer::AttackInputReleased() {
}

void ASlasherPlayer::AttackInputPressed() {
}

void ASlasherPlayer::ActionKillerReleased() {
}

void ASlasherPlayer::ActionKillerPressed() {
}

void ASlasherPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASlasherPlayer, _isInStalkMode);
    DOREPLIFETIME(ASlasherPlayer, _allowedKillCount);
    DOREPLIFETIME(ASlasherPlayer, _allowedKillAfterStrugglePhase);
    DOREPLIFETIME(ASlasherPlayer, _allowedKillLastSurvivor);
    DOREPLIFETIME(ASlasherPlayer, _cachedBloodlustTier);
    DOREPLIFETIME(ASlasherPlayer, _killerPowerDebugFlags);
}

ASlasherPlayer::ASlasherPlayer() {
    this->LoudNoiseDisplayTime = 5.00f;
    this->ShouldDisplayAttackZones = false;
    this->CamperExposer = NULL;
    this->KillerMoodInfluence = EKillerMoodInfluence::VE_None;
    this->ShowKillerPowerDebugInfo = false;
    this->HasDamagedGeneratorSinceHook = false;
    this->_slasherLightIntensity = 1.00f;
    this->_defaultAmountToSquish = 1.00f;
    this->_aimAssistComponent = NULL;
    this->_loudNoiseIndicator = NULL;
    this->_stealthIncreaseRate = 0.00f;
    this->_stealthDecreaseRate = 0.00f;
    this->_isKilling = false;
    this->_allowedKillCount = 0;
    this->_allowedKillAfterStrugglePhase = 0;
    this->_allowedKillLastSurvivor = false;
    this->_cachedBloodlustTier = 0;
    this->_killerPowerDebugFlags = 0;
    this->_enableKillerCrouchInput = false;
    this->_canStartAttackWhileCrouched = false;
    this->_carriedCamper = NULL;
    this->_basicAttackType = EAttackType::VE_Pounce;
    this->_survivorBeingKilled = NULL;
    this->_attackZonePivot = NULL;
    this->_turnInPlaceThresholdAngle = 45.00f;
}

