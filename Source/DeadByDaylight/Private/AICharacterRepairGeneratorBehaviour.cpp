#include "AICharacterRepairGeneratorBehaviour.h"

void UAICharacterRepairGeneratorBehaviour::OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

void UAICharacterRepairGeneratorBehaviour::OnGeneratorRepairedEventHandler(bool isAutoCompleted) {
}

UAICharacterRepairGeneratorBehaviour::UAICharacterRepairGeneratorBehaviour() {
    this->_aiPlayer = NULL;
    this->_aiPlayerController = NULL;
    this->_targetInteractor = NULL;
    this->_characterRepairGeneratorData = NULL;
}

