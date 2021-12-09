#include "SharedAuthenticationComponent.h"

USharedAuthenticationComponent::USharedAuthenticationComponent() {
    this->PopupZOrder = 10;
    this->AuthenticationProviderSelectionWidget = NULL;
    this->_worldContextObject = NULL;
    this->_migrateComponent = NULL;
}

