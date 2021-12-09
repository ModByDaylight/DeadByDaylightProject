#include "AkSurfaceReflectorSetComponent.h"

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
}

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent() {
    this->bEnableSurfaceReflectors = true;
    this->bEnableDiffraction = false;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
}

