#include "DisciplineEffect.h"

bool UDisciplineEffect::ShouldShowFakeKillerStain() const {
    return false;
}

UDisciplineEffect::UDisciplineEffect() {
    this->_deactivationDelay = 0.00f;
}

