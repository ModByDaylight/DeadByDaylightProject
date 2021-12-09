#include "BaseKillerAnimInstance.h"

class ASlasherPlayer;

ASlasherPlayer* UBaseKillerAnimInstance::GetOwningKiller() const {
    return NULL;
}

void UBaseKillerAnimInstance::DBD_ForceAnimPOV(const int32 animPOV) {
}

UBaseKillerAnimInstance::UBaseKillerAnimInstance() {
    this->_owningKiller = NULL;
    this->_firstPersonView = false;
}

