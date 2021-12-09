#include "K25Gateway.h"
#include "Net/UnrealNetwork.h"

void AK25Gateway::Server_StartGatewayPossession_Implementation(FVector possessionLocation, FRotator gatewayRotation) {
}

void AK25Gateway::Server_SetIsGatewayBeingPositionned_Implementation(bool isBeingPositionned) {
}

void AK25Gateway::Server_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation) {
}

void AK25Gateway::Server_SetGatewayOrientation_Implementation(FRotator rotation) {
}

void AK25Gateway::Server_EndGatewayPossession_Implementation() {
}

void AK25Gateway::OnRep_IsGatewayPossessed() {
}

void AK25Gateway::OnRep_IsBeingPositionned() {
}

void AK25Gateway::Multicast_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation) {
}

void AK25Gateway::Multicast_SetGatewayOrientation_Implementation(FRotator rotation) {
}

void AK25Gateway::Multicast_SetGatewayLocation_Implementation(FVector possessionLocation) {
}

bool AK25Gateway::IsGatewayPossessed() const {
    return false;
}











void AK25Gateway::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK25Gateway, _isGatewayPossessed);
    DOREPLIFETIME(AK25Gateway, _isBeingPositionned);
}

AK25Gateway::AK25Gateway() {
    this->_rayCastZOffet = 200.00f;
    this->_rayCastLength = 10000.00f;
    this->_survivorGatewayRotationSpeed = 10.00f;
    this->_minimumIndicatorVelocity = 460.00f;
    this->_indicatorVelocityEasingFactor = 0.05f;
    this->_minimumTimeBeforeTargetLocationMulticast = 0.25f;
    this->_visualComponent = NULL;
    this->_cameraPlacementComponent = NULL;
    this->_isGatewayPossessed = false;
    this->_isBeingPositionned = false;
}

