#include "SkillCheck.h"

class UChargeableInteractionDefinition;
class UInteractionDefinition;
class ADBDPlayer;

bool USkillCheck::ShouldShowWarning() {
    return false;
}

void USkillCheck::Server_OnSkillCheckSuccess_Implementation(FSkillCheckResponse skillCheckResponse) {
}
bool USkillCheck::Server_OnSkillCheckSuccess_Validate(FSkillCheckResponse skillCheckResponse) {
    return true;
}

void USkillCheck::Server_OnSkillCheckFailure_Implementation(FSkillCheckResponse skillCheckResponse) {
}
bool USkillCheck::Server_OnSkillCheckFailure_Validate(FSkillCheckResponse skillCheckResponse) {
    return true;
}

void USkillCheck::Server_DeactivateSkillCheck_Implementation() {
}
bool USkillCheck::Server_DeactivateSkillCheck_Validate() {
    return true;
}

void USkillCheck::Server_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition) {
}
bool USkillCheck::Server_ActivateSkillCheck_Validate(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition) {
    return true;
}

void USkillCheck::OnSkillCheckInput() {
}

void USkillCheck::Multicast_SkillCheckResponse_Implementation(FSkillCheckResponse skillCheckResponse) {
}

void USkillCheck::Multicast_OnTriggerSkillCheck_Implementation(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FString& id, const FString& salt) {
}

void USkillCheck::Multicast_DeactivateSkillCheck_Implementation() {
}

void USkillCheck::Multicast_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition) {
}

void USkillCheck::Local_OnSkillCheckSuccessTrigger(const bool bonus, const bool insane, ESkillCheckCustomType type, const bool failedCountedAsGood) {
}

void USkillCheck::Local_OnSkillCheckFailureTrigger(const bool hadInput, const bool insane, ESkillCheckCustomType type) {
}

void USkillCheck::Local_ActivateSkillCheck(UInteractionDefinition* interaction, float warningSoundDelay) {
}

void USkillCheck::Local_ActivateCustomSkillCheck(ESkillCheckCustomType type, float warningSoundDelay) {
}

bool USkillCheck::IsOffCenterSkillCheck() const {
    return false;
}

bool USkillCheck::IsHexSkillCheck(ADBDPlayer* dbdPlayer) const {
    return false;
}

bool USkillCheck::IsDisplayed() const {
    return false;
}

float USkillCheck::GetStartDelayInSeconds() const {
    return 0.0f;
}

bool USkillCheck::CanSkillCheckTypeGrantScore(ESkillCheckCustomType type) {
    return false;
}

void USkillCheck::Authority_OnSkillCheckTimeout() {
}

USkillCheck::USkillCheck() {
    this->_owner = NULL;
    this->_currentInteraction = NULL;
}

