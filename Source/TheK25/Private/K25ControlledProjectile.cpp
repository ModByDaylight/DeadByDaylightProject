#include "K25ControlledProjectile.h"
#include "Net/UnrealNetwork.h"

void AK25ControlledProjectile::Server_ProcessYawInput_Implementation(float deltaTime, float scaledInput) {
}

void AK25ControlledProjectile::Server_ProcessPitchInput_Implementation(float deltaTime, float scaledInput) {
}

void AK25ControlledProjectile::OnRep_AngularVelocity() {
}


void AK25ControlledProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK25ControlledProjectile, _lastAppliedAngularVelocity);
}

AK25ControlledProjectile::AK25ControlledProjectile() {
    this->_pitchClampAngle = 80.00f;
    this->_currentRoll = 0.00f;
    this->_targetRoll = 0.00f;
}

