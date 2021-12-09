#include "BearTrapOutlineUpdateStrategy.h"

class UMapActorComponent;

void UBearTrapOutlineUpdateStrategy::SetOwningBearTrapMapActorComponent(UMapActorComponent* mapActorComponent) {
}

UBearTrapOutlineUpdateStrategy::UBearTrapOutlineUpdateStrategy() {
    this->KillerOutlineFadeCurve = NULL;
    this->_owningBearTrapMapActorComponent = NULL;
}

