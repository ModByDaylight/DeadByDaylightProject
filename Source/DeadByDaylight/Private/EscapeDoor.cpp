#include "EscapeDoor.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"
#include "AkComponent.h"
#include "BlockableComponent.h"
#include "Components/SceneComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class AEscapeBlocker;
class ADBDPlayer;
class ACamperPlayer;
class AActor;
class USkeletalMeshComponent;

void AEscapeDoor::StartAtlantaDoorOpeningSound() {
}

void AEscapeDoor::StartAtlantaDoorBeepingSound() {
}

void AEscapeDoor::SetIsActivated(bool NewIsActivated) {
}


void AEscapeDoor::OnRep_OnEscapeBlockerSet(AEscapeBlocker* escapeBlockerInstance) {
}

void AEscapeDoor::OnRep_Activated(bool oldActivated) {
}

void AEscapeDoor::OnPlayerExitExitArea(ADBDPlayer* player) {
}

void AEscapeDoor::OnPlayerEnterExitArea(ADBDPlayer* player) {
}


void AEscapeDoor::OnExitGateOpened(ADBDPlayer* player) {
}


void AEscapeDoor::OnEscapeZoneEndOverlap(AActor* overlappingActor) {
}

void AEscapeDoor::OnEscapeZoneBeginOverlap(AActor* overlappingActor) {
}

void AEscapeDoor::OnCamperStartOpeningExitGate(ACamperPlayer* player) {
}



bool AEscapeDoor::IsDoorSwitchBlocked() const {
    return false;
}

bool AEscapeDoor::IsActivated() const {
    return false;
}


FVector AEscapeDoor::GetParadiseServerLocation_Implementation() const {
    return FVector{};
}

float AEscapeDoor::GetOpenTime() const {
    return 0.0f;
}


bool AEscapeDoor::GetIsOpen() const {
    return false;
}



USkeletalMeshComponent* AEscapeDoor::GetDoorSkeletalMeshComponent_Implementation() const {
    return NULL;
}

bool AEscapeDoor::GetAtlantaExitOpeningIndicatorVisibility() const {
    return false;
}

void AEscapeDoor::Authority_SetEscapeBlocker() {
}

void AEscapeDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscapeDoor, _activated);
    DOREPLIFETIME(AEscapeDoor, _escapeBlockerInstance);
}

AEscapeDoor::AEscapeDoor() {
    this->_killerOpenChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("KillerOpenChargeable"));
    this->_openChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("openChargeable"));
    this->_ak_audio_escape = CreateDefaultSubobject<UAkComponent>(TEXT("ak_audio_escape"));
    this->_escapeDoorAnimInstance = NULL;
    this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootComponent"));
    this->_activated = false;
    this->_escapeBlockerInstance = NULL;
    this->_spotlight = NULL;
    this->_localOverlappingCamper = NULL;
    this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->_doorSwitchBlockableComponent = CreateDefaultSubobject<UBlockableComponent>(TEXT("DoorSwitchBlockableComponent"));
}

