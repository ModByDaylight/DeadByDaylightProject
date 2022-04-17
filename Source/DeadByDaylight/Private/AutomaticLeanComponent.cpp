#include "AutomaticLeanComponent.h"
#include "Net/UnrealNetwork.h"

void UAutomaticLeanComponent::Server_SetLeanState_Implementation(ELeanState leanState) {
}
bool UAutomaticLeanComponent::Server_SetLeanState_Validate(ELeanState leanState) {
    return true;
}

void UAutomaticLeanComponent::OnRep_LeanState() {
}

void UAutomaticLeanComponent::Local_Unlean() {
}

void UAutomaticLeanComponent::Local_Lean() {
}

bool UAutomaticLeanComponent::IsLeaning() const {
    return false;
}

ELeanState UAutomaticLeanComponent::GetPotentialLeanState() const {
    return ELeanState::NotLeaning;
}

ELeanState UAutomaticLeanComponent::GetLeanState() const {
    return ELeanState::NotLeaning;
}

float UAutomaticLeanComponent::GetAvailableDistanceInFrontOfCamera() const {
    return 0.0f;
}

bool UAutomaticLeanComponent::CanInitiateLean() const {
    return false;
}

void UAutomaticLeanComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAutomaticLeanComponent, _leanState);
}

UAutomaticLeanComponent::UAutomaticLeanComponent() {
    this->_middleSphereTraceLength = 1.00f;
    this->_sideSphereTraceLength = 1.00f;
    this->_sphereTraceRadius = 10.00f;
    this->_standingTraceHeightOffset = 0.00f;
    this->_crouchingTraceHeightOffset = 0.00f;
    this->_sideTraceOffset = 0.00f;
    this->_maxCameraDistance = 50.00f;
    this->_maxCameraAngle = 45.00f;
    this->_debugMode = false;
    this->_leanState = ELeanState::NotLeaning;
}

