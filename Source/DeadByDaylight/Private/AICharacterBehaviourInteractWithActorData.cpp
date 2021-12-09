#include "AICharacterBehaviourInteractWithActorData.h"

class AActor;

void UAICharacterBehaviourInteractWithActorData::WatchGameEventTypes(TArray<FGameplayTag> gameEventTypes) {
}

void UAICharacterBehaviourInteractWithActorData::WatchGameEventType(FGameplayTag gameEventType) {
}

void UAICharacterBehaviourInteractWithActorData::Init(AActor* actor, ECharacterMovementTypes NewCharacterMovementType, bool NewUsePathfinding) {
}

UAICharacterBehaviourInteractWithActorData::UAICharacterBehaviourInteractWithActorData() {
    this->TargetActor = NULL;
    this->CharacterMovementType = ECharacterMovementTypes::Normal;
    this->UsePathfinding = true;
}

