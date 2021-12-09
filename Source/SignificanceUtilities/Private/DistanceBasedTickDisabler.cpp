#include "DistanceBasedTickDisabler.h"

class UActorComponent;

void UDistanceBasedTickDisabler::UnregisterComponent(UActorComponent* component) {
}

void UDistanceBasedTickDisabler::RegisterComponent(UActorComponent* component) {
}

UDistanceBasedTickDisabler::UDistanceBasedTickDisabler() {
    this->_autoRegisterOwner = false;
    this->_autoRegisterTimelines = true;
    this->_insignificantWhenBehindTheCamera = true;
}

