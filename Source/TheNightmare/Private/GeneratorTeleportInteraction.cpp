#include "GeneratorTeleportInteraction.h"
#include "Net/UnrealNetwork.h"

class AGenerator;
class ADBDPlayer;
class ASlasherPlayer;

void UGeneratorTeleportInteraction::StopBloodSpurts() {
}

void UGeneratorTeleportInteraction::StartBloodSpurts() {
}


void UGeneratorTeleportInteraction::Server_SetSelectedGenerator_Implementation(AGenerator* generator) {
}
bool UGeneratorTeleportInteraction::Server_SetSelectedGenerator_Validate(AGenerator* generator) {
    return true;
}





void UGeneratorTeleportInteraction::OnRep_TeleportCooldownTimer() {
}

void UGeneratorTeleportInteraction::OnRep_SelectedGenerator() {
}


void UGeneratorTeleportInteraction::OnIntroCompleted() {
}

void UGeneratorTeleportInteraction::OnBloodSpurts() {
}

void UGeneratorTeleportInteraction::Multicast_TeleportPlayer_Implementation(FVector location, FRotator rotation) {
}

void UGeneratorTeleportInteraction::Multicast_OnTeleportLocationChosen_Implementation(AGenerator* generator, FTransform location) {
}

bool UGeneratorTeleportInteraction::IsTeleportAvailable() const {
    return false;
}

void UGeneratorTeleportInteraction::InitializeTunableValues(ASlasherPlayer* killer) {
}

ADBDPlayer* UGeneratorTeleportInteraction::GetOwningPlayer() const {
    return NULL;
}

AGenerator* UGeneratorTeleportInteraction::GetInlineGenerator(const ADBDPlayer* player) const {
    return NULL;
}

bool UGeneratorTeleportInteraction::CanTeleportAtGenerator(AGenerator* generator) const {
    return false;
}

bool UGeneratorTeleportInteraction::Authority_TeleportPlayerToGenerator(ADBDPlayer* playerToTeleport, AGenerator* generator) {
    return false;
}

void UGeneratorTeleportInteraction::Authority_StartTeleportCooldown(bool teleported) {
}

void UGeneratorTeleportInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGeneratorTeleportInteraction, _teleportCooldownTimer);
    DOREPLIFETIME(UGeneratorTeleportInteraction, _selectedGenerator);
    DOREPLIFETIME(UGeneratorTeleportInteraction, _selectedTeleportLocation);
}

UGeneratorTeleportInteraction::UGeneratorTeleportInteraction() {
    this->OnBloodSpurtsAINoiseEventRange = 1600.00f;
    this->_teleportCooldownTimer = NULL;
    this->_selectedGenerator = NULL;
    this->_locallySelectedGenerator = NULL;
    this->_isInteractionOngoing = false;
    this->_teleportFailed = false;
    this->_bloodSpurtInterval = 0.50f;
    this->_collisionCheckCapsuleHalfHeight = 80.00f;
    this->_collisionCheckCapsuleRadius = 60.00f;
    this->_capsuleTraceAngleIncrement = 10.00f;
    this->_generatorTeleportMaxAngle = 60.00f;
    this->_downRaycastLength = 80.00f;
}

