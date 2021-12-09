#include "AICharacterBehaviourInteractWithActor.h"

void UAICharacterBehaviourInteractWithActor::OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

UAICharacterBehaviourInteractWithActor::UAICharacterBehaviourInteractWithActor() {
    this->_aiPlayer = NULL;
    this->_aiPlayerController = NULL;
    this->_behaviourData = NULL;
}

