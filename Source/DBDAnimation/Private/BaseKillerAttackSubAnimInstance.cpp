#include "BaseKillerAttackSubAnimInstance.h"

class ASlasherPlayer;

ASlasherPlayer* UBaseKillerAttackSubAnimInstance::GetOwningKiller() const {
    return NULL;
}

UBaseKillerAttackSubAnimInstance::UBaseKillerAttackSubAnimInstance() {
    this->_owningKiller = NULL;
}

