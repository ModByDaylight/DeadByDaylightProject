#include "ActorSpawner.h"

class AActor;

bool UActorSpawner::UseActivatedElement() {
    return false;
}

bool UActorSpawner::IsEnabled() const {
    return false;
}

void UActorSpawner::EditorForceSpawnVisualization() {
}

void UActorSpawner::AuthoritySelect(bool selected) {
}

AActor* UActorSpawner::AuthorityGetSpawnedActor() const {
    return NULL;
}

void UActorSpawner::Authority_SpawnActorAsyncEvent() {
}

UActorSpawner::UActorSpawner() {
    this->Type = EGameplayElementType::Generic;
    this->ActivatedByDefault = true;
    this->Weight = 1.00f;
    this->SpawnCountMax = 1;
    this->SpawnPriorityTier = 1;
    this->WeightInfluenceable = true;
    this->WeightInfluencer = true;
    this->Cost = 1.00f;
    this->_toSpawn = NULL;
}

