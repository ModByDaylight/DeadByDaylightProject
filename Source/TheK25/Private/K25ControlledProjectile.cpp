#include "K25ControlledProjectile.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
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

AK25ControlledProjectile::AK25ControlledProjectile() : Super(FObjectInitializer::Get()
    .SetDefaultSubobjectClass(TEXT("Movement"), UK25ControlledProjectileMovementComponent::StaticClass())) {
    this->_killerViewProjectileStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Killer Projectile Static Mesh"));
    this->_killerSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
    this->_killerCameraPlacement = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Positionning"));
    this->_pitchClampAngle = 80.00f;
    this->_controlledProjectileMovementComponent = CastChecked<UK25ControlledProjectileMovementComponent>(Movement);
    this->_currentRoll = 0.00f;
    this->_targetRoll = 0.00f;
}

