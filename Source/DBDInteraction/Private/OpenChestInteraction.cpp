#include "OpenChestInteraction.h"

class ACollectable;
class ADBDPlayer;

void UOpenChestInteraction::CollectItemIfEmptyHanded(ACollectable* collectable, const ADBDPlayer* player) {
}

UOpenChestInteraction::UOpenChestInteraction() {
    this->_successExitTimeAnimSequenceReference = NULL;
    this->_startTime = 0.00f;
}

