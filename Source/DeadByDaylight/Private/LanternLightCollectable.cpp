#include "LanternLightCollectable.h"
#include "Net/UnrealNetwork.h"

class ALanternInteractable;

void ALanternLightCollectable::SetParentLantern(ALanternInteractable* parentLantern) {
}

void ALanternLightCollectable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALanternLightCollectable, _parentLantern);
}

ALanternLightCollectable::ALanternLightCollectable() {
    this->_parentLantern = NULL;
}

