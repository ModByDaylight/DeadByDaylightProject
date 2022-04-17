#include "PhaseWalkingComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UDecoySlasherComponent;

void UPhaseWalkingComponent::UpdateSurvivorVisibility(bool visible) {
}

void UPhaseWalkingComponent::UpdateKillerVisibility() {
}


void UPhaseWalkingComponent::Server_Broadcast_PhaseWalk_Implementation(const FPhaseWalkInfo& phaseWalkInfo) {
}
bool UPhaseWalkingComponent::Server_Broadcast_PhaseWalk_Validate(const FPhaseWalkInfo& phaseWalkInfo) {
    return true;
}

void UPhaseWalkingComponent::RefillActivePhaseWalkCharges() {
}

void UPhaseWalkingComponent::OnLevelReadyToPlay() {
}

void UPhaseWalkingComponent::Multicast_Broadcast_PhaseWalk_Implementation(const FPhaseWalkInfo& phaseWalkInfo) {
}
bool UPhaseWalkingComponent::Multicast_Broadcast_PhaseWalk_Validate(const FPhaseWalkInfo& phaseWalkInfo) {
    return true;
}

void UPhaseWalkingComponent::ModifyActivePhaseWalkCharges(float delta) {
}


void UPhaseWalkingComponent::Local_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo) {
}

void UPhaseWalkingComponent::Local_EndPhaseWalks() {
}

bool UPhaseWalkingComponent::IsPhaseWalking() const {
    return false;
}

bool UPhaseWalkingComponent::IsPassivePhaseWalking() const {
    return false;
}

bool UPhaseWalkingComponent::IsDecoyActive() const {
    return false;
}

bool UPhaseWalkingComponent::IsActivePhaseWalking() const {
    return false;
}

int32 UPhaseWalkingComponent::GetSpiritPassivePhaseWalkHusksCountToSpawn() const {
    return 0;
}

FDBDTimer UPhaseWalkingComponent::GetPassivePhaseWalkTimer() const {
    return FDBDTimer{};
}

AActor* UPhaseWalkingComponent::GetHusk() const {
    return NULL;
}

UDecoySlasherComponent* UPhaseWalkingComponent::GetDecoySlasherComponent() const {
    return NULL;
}

float UPhaseWalkingComponent::GetActivePhaseWalkCharges() const {
    return 0.0f;
}

float UPhaseWalkingComponent::GetActivePhaseWalkChargePercentage() const {
    return 0.0f;
}

bool UPhaseWalkingComponent::CanStartActivePhaseWalk() const {
    return false;
}

void UPhaseWalkingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhaseWalkingComponent, _husk);
}

UPhaseWalkingComponent::UPhaseWalkingComponent() {
    this->_huskClass = NULL;
    this->_isInteractionPhaseWalking = false;
    this->_husk = NULL;
    this->_survivorsAreVisible = true;
    this->_passivePhaseWalkHusksCount = 7;
}

