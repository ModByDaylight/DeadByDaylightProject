#include "ActorClipperComponent.h"

class UPrimitiveCollection;

void UActorClipperComponent::SetPrimitiveCollection(const UPrimitiveCollection* clippables) {
}

void UActorClipperComponent::SetClippingEnabled(bool enabled) {
}

void UActorClipperComponent::OnOwnerLocallyObservedChanged(bool locallyObserved) {
}

UActorClipperComponent::UActorClipperComponent() {
    this->Shape = NULL;
}

