#include "AIMoveToInteract.h"

class ADBDPlayer;
class UAICharacterBehaviourData;

void UAIMoveToInteract::InteractionPointReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

void UAIMoveToInteract::Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData) {
}

UAIMoveToInteract::UAIMoveToInteract() {
    this->_aiMoveToInteractData = NULL;
    this->_aiController = NULL;
}

