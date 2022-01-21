#include "Interactable.h"
#include "InteractableTransformOptimizer.h"

class UPrimitiveComponent;
class UInteractor;
class ADBDPlayer;
class UInteractionDefinition;
class UInterruptionDefinition;

void AInteractable::SetSingleZone(UPrimitiveComponent* zone) {
}

void AInteractable::SetInteractorsUsable(bool usable, UInteractor* exception) {
}


void AInteractable::OnLevelReadyToPlay_Native() {
}


void AInteractable::OnInteractorLockChanged(bool locked, ADBDPlayer* interactingPlayer) {
}

bool AInteractable::IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractor* interactor, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const {
    return false;
}

bool AInteractable::IsInteractionDone_Implementation(ADBDPlayer* player, const UInteractor* interactor, const UInteractionDefinition* definition, EInputInteractionType interactionType) const {
    return false;
}

bool AInteractable::IsInteractingWith(const ADBDPlayer* player) const {
    return false;
}

bool AInteractable::HasAnOngoingInteraction() const {
    return false;
}

ADBDPlayer* AInteractable::GetPlayerOwner() const {
    return NULL;
}

TArray<UInteractor*> AInteractable::GetInteractors() const {
    return TArray<UInteractor*>();
}

TArray<ADBDPlayer*> AInteractable::GetInteractingPlayersRaw() const {
    return TArray<ADBDPlayer*>();
}

FVector AInteractable::GetFocalPointPosition_Implementation(const ADBDPlayer* player, const UInteractionDefinition* definition) const {
    return FVector{};
}

void AInteractable::AuthorityRequestCancelOngoingInteractions(bool onlyOnHitCancelableInteractions) {
}

TArray<ADBDPlayer*> AInteractable::Authority_GetInteractingPlayers() const {
    return TArray<ADBDPlayer*>();
}

void AInteractable::AttachEveryInteractionToZone(UPrimitiveComponent* zone) {
}

AInteractable::AInteractable() {
    this->_singleZone = NULL;
    this->_useSingleZone = false;
    this->_transformOptimizer = CreateDefaultSubobject<UInteractableTransformOptimizer>(TEXT("InteractableOptimizer"));
}

