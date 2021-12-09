#include "AkAcousticPortal.h"

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}

AAkAcousticPortal::AAkAcousticPortal() {
    this->InitialState = AkAcousticPortalState::Open;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionCollisionChannel = ECC_Visibility;
}

