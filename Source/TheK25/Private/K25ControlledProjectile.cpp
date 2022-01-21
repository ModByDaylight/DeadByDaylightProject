#include "K25ControlledProjectile.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "K25ControlledProjectileMovementComponent.h"

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
    this->_killerViewProjectileStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Killer Projectile Static Mesh"));
    this->_killerSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
    this->_killerCameraPlacement = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Positionning"));
    this->_pitchClampAngle = 80.00f;
    this->_controlledProjectileMovementComponent = CreateDefaultSubobject<UK25ControlledProjectileMovementComponent>(TEXT("Movement"));
    this->_currentRoll = 0.00f;
    this->_targetRoll = 0.00f;
}

