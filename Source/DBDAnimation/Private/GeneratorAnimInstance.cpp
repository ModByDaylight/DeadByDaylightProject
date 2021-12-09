#include "GeneratorAnimInstance.h"

void UGeneratorAnimInstance::SetSkillCheckSuccess(bool success) {
}

UGeneratorAnimInstance::UGeneratorAnimInstance() {
    this->_owningGenerator = NULL;
    this->_rushFailed = false;
    this->_isActivated = false;
    this->_percentComplete = 0.00f;
}

