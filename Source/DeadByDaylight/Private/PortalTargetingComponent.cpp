#include "PortalTargetingComponent.h"

class ADemogorgonPortal;

void UPortalTargetingComponent::SetIsPorting(bool isPorting) {
}

void UPortalTargetingComponent::Server_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal) {
}
bool UPortalTargetingComponent::Server_SetTargetedPortal_Validate(ADemogorgonPortal* targetedPortal) {
    return true;
}

void UPortalTargetingComponent::Multicast_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal) {
}
bool UPortalTargetingComponent::Multicast_SetTargetedPortal_Validate(ADemogorgonPortal* targetedPortal) {
    return true;
}

ADemogorgonPortal* UPortalTargetingComponent::GetTargetedPortal() {
    return NULL;
}

UPortalTargetingComponent::UPortalTargetingComponent() {
    this->_targetedPortal = NULL;
    this->_portalPlacerState = NULL;
}

