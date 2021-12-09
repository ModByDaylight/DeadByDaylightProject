#include "StruggleComponent.h"

void UStruggleComponent::OnSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type) {
}

void UStruggleComponent::Local_TryActivateSkillCheck() {
}

UStruggleComponent::UStruggleComponent() {
    this->_skillCheckCount = 0;
}

