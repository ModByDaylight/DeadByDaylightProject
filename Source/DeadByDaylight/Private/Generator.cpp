#include "Generator.h"
#include "Net/UnrealNetwork.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class ADBDPlayer;
class ACamperPlayer;
class AActor;
class UChargeableComponent;
class UObject;


void AGenerator::TriggerSkillCheckFailureLoudNoise(ADBDPlayer* instigatingPlayer) {
}




void AGenerator::SetRepaired(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted) {
}

void AGenerator::SetOverchargeLevel(const int32 overchargeLevel) {
}

void AGenerator::SetIsBlockedFromCharging(bool isBlockedFromCharging) {
}

void AGenerator::SetIsAutoCompleted(const bool isAutoCompleted) {
}


void AGenerator::ResetGenerator() {
}

void AGenerator::RemovePlayerStartTime(const ADBDPlayer* player) {
}



void AGenerator::OnUpdateChargeProgress_Implementation(float newPercentComplete) {
}



void AGenerator::OnRep_IsBlocked() {
}

void AGenerator::OnRep_DamageData() {
}




void AGenerator::OnChargeChanged(UChargeableComponent* chargeableComponent, float percent) {
}

void AGenerator::OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime) {
}





void AGenerator::Multicast_PlayFailSparksFX_Implementation(ADBDPlayer* player, bool explode) {
}

void AGenerator::Multicast_OnRepaired_Implementation(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted, const int32 updatedRemainingGeneratorCount) {
}

void AGenerator::Multicast_DamageCosmetic_Implementation(bool intense) {
}

bool AGenerator::IsRegressing() const {
    return false;
}

bool AGenerator::IsIntenseDamage() const {
    return false;
}

bool AGenerator::IsBlocked() const {
    return false;
}

bool AGenerator::IsBeingRepaired() const {
    return false;
}




TArray<ADBDPlayer*> AGenerator::GetRepairers() const {
    return TArray<ADBDPlayer*>();
}

TArray<FPlayerFloatTuple> AGenerator::GetPlayerStartTimes() const {
    return TArray<FPlayerFloatTuple>();
}

float AGenerator::GetPlayerStartTime(const ADBDPlayer* player) const {
    return 0.0f;
}

ESkillCheckCustomType AGenerator::GetOverchargeSkillCheckToTrigger() const {
    return ESkillCheckCustomType::VE_None;
}

int32 AGenerator::GetOverchargeLevel() const {
    return 0;
}

bool AGenerator::GetIsBlockedFromCharging() {
    return false;
}

bool AGenerator::GetIsAutoCompleted() const {
    return false;
}

UChargeableComponent* AGenerator::GetGeneratorChargeComponent_Implementation() const {
    return NULL;
}


void AGenerator::DisableInaccessibleInteractors() {
}

void AGenerator::ClearGeneratorOvercharge() {
}

bool AGenerator::CanSurvivorReactToBlockingEntity(const ACamperPlayer* survivor) const {
    return false;
}

void AGenerator::BroadcastIsDamagedChangedEvent(ADBDPlayer* player) {
}

void AGenerator::BroadcastGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor) const {
}

void AGenerator::Authority_RepairDamage(ADBDPlayer* repairedBy) {
}

void AGenerator::Authority_RemoveBlockingSource(const UObject* source) {
}

void AGenerator::Authority_OnChargeChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete) {
}

void AGenerator::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime) {
}

bool AGenerator::Authority_HasRepairedDamage(const ADBDPlayer* player) const {
    return false;
}

void AGenerator::Authority_Damage(ADBDPlayer* damagedBy, const float immediateRegressionPercent) {
}

void AGenerator::Authority_AddBlockingSource(const UObject* source) {
}

void AGenerator::AddPlayerStartTime(ADBDPlayer* player, float startTime) {
}


void AGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGenerator, _damageData);
    DOREPLIFETIME(AGenerator, _isBlocked);
    DOREPLIFETIME(AGenerator, _overchargeLevel);
}

AGenerator::AGenerator() {
    this->Activated = false;
    this->IsRepaired = false;
    this->WasASMCachePreWarmTriggered = false;
    this->IsPlaySkillcheckAesthetic = true;
    this->ForceRevealToLocalPlayer = false;
    this->KillerOutlineFadeCurve = NULL;
    this->NativePercentComplete = 0.00f;
    this->FireLevelScoreEventOnFix = false;
    this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->_isBlocked = false;
    this->_isBlockedFromCharging = false;
    this->_generatorCharge = NULL;
    this->_isAutoCompleted = false;
    this->_overchargeLevel = 0;
    this->_coopRepairTracker = NULL;
    this->_VFX_LightDistanceDefault = 350.00f;
}

