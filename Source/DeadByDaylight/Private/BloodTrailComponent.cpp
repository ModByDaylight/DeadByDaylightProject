#include "BloodTrailComponent.h"

void UBloodTrailComponent::ConditionalStartBleeding() {
}

UBloodTrailComponent::UBloodTrailComponent() {
    this->_bloodTrailSettings = NULL;
    this->_bloodDecalEffect = NULL;
    this->_decalSpawner = NULL;
}

