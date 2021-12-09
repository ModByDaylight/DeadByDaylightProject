#include "ArchiveQuestSpecialBehaviour.h"

FArchiveQuestSpecialBehaviour::FArchiveQuestSpecialBehaviour() {
    this->Type = EContextualType::None;
    this->AdditiveBehaviour = EAdditiveBehaviour::AddValues;
    this->StackableBehaviour = EStackingBehaviours::Stackable;
    this->OwnershipBehaviour = EOwnershipBehaviour::Personal;
    this->SpawnQuantity = 0;
}

