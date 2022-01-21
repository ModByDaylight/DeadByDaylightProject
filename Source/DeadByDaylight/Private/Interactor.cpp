#include "Interactor.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class UInteractionDefinition;
class UInterruptionDefinition;
class AInteractable;

void UInteractor::SetIsUsable(bool isUsableParam) {
}

void UInteractor::Multicast_ReservationStatus_Implementation(ADBDPlayer* player, bool lock) {
}
bool UInteractor::Multicast_ReservationStatus_Validate(ADBDPlayer* player, bool lock) {
    return true;
}

void UInteractor::Multicast_LockStatus_Implementation(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock) {
}
bool UInteractor::Multicast_LockStatus_Validate(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock) {
    return true;
}

bool UInteractor::IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const {
    return false;
}

bool UInteractor::IsInteracting() const {
    return false;
}

bool UInteractor::GetIsUsable() const {
    return false;
}

TArray<UInteractionDefinition*> UInteractor::GetInteractionDefinitions() const {
    return TArray<UInteractionDefinition*>();
}

ADBDPlayer* UInteractor::GetInteractingPlayerRaw() const {
    return NULL;
}

AInteractable* UInteractor::GetInteractable() const {
    return NULL;
}

UInteractionDefinition* UInteractor::GetCurrentInteraction() const {
    return NULL;
}

bool UInteractor::CanPerformInteraction(const ADBDPlayer* player, const UInteractionDefinition* definition) const {
    return false;
}


ADBDPlayer* UInteractor::Authority_GetInteractingPlayer() const {
    return NULL;
}

void UInteractor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractor, IsUsable);
}

UInteractor::UInteractor() {
    this->IsUsable = true;
    this->_currentInteraction = NULL;
}

