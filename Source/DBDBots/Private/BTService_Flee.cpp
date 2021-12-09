#include "BTService_Flee.h"

UBTService_Flee::UBTService_Flee() {
    this->PathStrategySelectorClass = NULL;
    this->OnEndObjectInFocusCooldown = 15.00f;
    this->ClearFleePathBBKeyDelay = 1.00f;
    this->_activePath = NULL;
    this->_strategySelector = NULL;
}

