#include "BTService_SetMovementMode.h"

UBTService_SetMovementMode::UBTService_SetMovementMode() {
    this->OnEnterMovementMode = ECharacterMovementTypes::Run;
    this->OnExitMovementMode = ECharacterMovementTypes::Run;
}

