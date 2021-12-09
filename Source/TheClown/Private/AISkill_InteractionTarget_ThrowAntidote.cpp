#include "AISkill_InteractionTarget_ThrowAntidote.h"

void UAISkill_InteractionTarget_ThrowAntidote::OnPathUpdated() {
}

UAISkill_InteractionTarget_ThrowAntidote::UAISkill_InteractionTarget_ThrowAntidote() {
    this->_minPathLengthForThrow = 3000.00f;
    this->_minThrowDistance = 2000.00f;
    this->_cooldownTime = 30.00f;
}

