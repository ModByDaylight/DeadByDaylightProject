#include "AICharacterEvasionBehaviour.h"

void UAICharacterEvasionBehaviour::EscapeDestinationReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

UAICharacterEvasionBehaviour::UAICharacterEvasionBehaviour() {
    this->_prey = NULL;
    this->_preyAIController = NULL;
    this->_currentEscapePoint = NULL;
    this->_characterEvasionData = NULL;
}

