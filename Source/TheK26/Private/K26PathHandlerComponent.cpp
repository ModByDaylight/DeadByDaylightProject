#include "K26PathHandlerComponent.h"
#include "Net/UnrealNetwork.h"

class UK26AmmoHandlerComponent;
class UK26CrowPlacementValidatorComponent;

void UK26PathHandlerComponent::SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26CrowPlacementValidatorComponent* placementValidator) {
}

void UK26PathHandlerComponent::OnRep_AvailablePathData() {
}

void UK26PathHandlerComponent::OnIterativeAvailablePathUpdate() {
}

void UK26PathHandlerComponent::Multicast_FillAvailablePathArray_Implementation(const int32 maxAmmo) {
}

void UK26PathHandlerComponent::Authority_OnMaxAmmoSet(const int32 maxAmmo) {
}

void UK26PathHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK26PathHandlerComponent, _availablePathData);
}

UK26PathHandlerComponent::UK26PathHandlerComponent() {
    this->_visualPathPart = NULL;
    this->_visualPathEndArrow = NULL;
    this->_ammoHandler = NULL;
    this->_placementValidator = NULL;
}

