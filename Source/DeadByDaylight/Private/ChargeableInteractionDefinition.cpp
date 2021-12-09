#include "ChargeableInteractionDefinition.h"

class UChargeableComponent;
class ADBDPlayer;
class ACollectable;

bool UChargeableInteractionDefinition::ShouldShowSpeedProficiencyForMultipleInteractors() const {
    return false;
}

void UChargeableInteractionDefinition::SetTutorialChargeableMultiplier(float multiplierValue) {
}

void UChargeableInteractionDefinition::SetSpeedBase(float speedBase) {
}

void UChargeableInteractionDefinition::SetChargeableComponent(UChargeableComponent* chargeableComponent) {
}


void UChargeableInteractionDefinition::OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type) {
}


void UChargeableInteractionDefinition::OnSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type) {
}


bool UChargeableInteractionDefinition::HasSkillCheckHappened(const ADBDPlayer* character) const {
    return false;
}

float UChargeableInteractionDefinition::GetTunableValue(FName TunableValueID, float defaultValue) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetSuccessProbability_Implementation() const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckProbability(const ADBDPlayer* interactingPlayer) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckFailureTimePenalty_Implementation() const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckFailurePercentPenalty(const ADBDPlayer* player) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckDifficulityModifier_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckCharge_Implementation(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const {
    return 0.0f;
}

int32 UChargeableInteractionDefinition::GetPipsPassed() const {
    return 0;
}

float UChargeableInteractionDefinition::GetPerkMultiplier_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetMultiplicativeLuckBonus_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetMaxCharge() const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetItemEfficiencyModifier_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetGoodSkillCheckSuccessPercentReward(const ADBDPlayer* player) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetChargeSpeedModifier(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetChargeAmountForTime(float deltaSeconds, ADBDPlayer* character) const {
    return 0.0f;
}

UChargeableComponent* UChargeableInteractionDefinition::GetChargeableComponent() const {
    return NULL;
}

float UChargeableInteractionDefinition::GetBonusSkillCheckZoneSizeModifier_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetBonusSkillCheckSuccessPercentReward(const ADBDPlayer* player) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetAdditiveLuckBonus_Implementation(const ADBDPlayer* character) const {
    return 0.0f;
}

float UChargeableInteractionDefinition::GetAdditiveChargeTimeReductionAsMultiplier(const ADBDPlayer* character) const {
    return 0.0f;
}

void UChargeableInteractionDefinition::Authority_ChargeWithItem(float deltaSeconds, ACollectable* item, ADBDPlayer* character) {
}

void UChargeableInteractionDefinition::Authority_AddCharge(float deltaSeconds, ADBDPlayer* character) {
}

UChargeableInteractionDefinition::UChargeableInteractionDefinition() {
    this->StopInteractionOnChargeComplete = false;
    this->HasProgressivelyHarderSkillChecks = false;
    this->ProgressiveDifficultyModifier = 0.00f;
    this->ProgressBarType = EChargeableInteractionBarType::VE_Normal;
    this->HideProgressBar = false;
    this->ShowItemIcon = false;
    this->AtlantaIsCancellableWhileCharging = false;
    this->_chargeableComponent = NULL;
    this->_tutorialChargeableMultiplier = 1.00f;
    this->ShowSpeedProficiencyForMultipleInteractors = false;
}

