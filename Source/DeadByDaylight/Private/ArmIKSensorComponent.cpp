#include "ArmIKSensorComponent.h"

UArmIKSensorComponent::UArmIKSensorComponent() {
    this->_mesh = NULL;
    this->_capsuleRadius = 10.00f;
    this->_capsuleHalfHeight = 10.00f;
    this->_traceLength = 200.00f;
    this->_owningCamera = NULL;
}

