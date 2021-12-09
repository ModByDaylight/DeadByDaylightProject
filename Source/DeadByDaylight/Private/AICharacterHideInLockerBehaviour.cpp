#include "AICharacterHideInLockerBehaviour.h"

void UAICharacterHideInLockerBehaviour::OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

UAICharacterHideInLockerBehaviour::UAICharacterHideInLockerBehaviour() {
    this->_aiPlayer = NULL;
    this->_aiPlayerController = NULL;
    this->_characterHideInLockerData = NULL;
}

