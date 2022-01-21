#include "EndGameEntity.h"
#include "Components/SkeletalMeshComponent.h"

AEndGameEntity::AEndGameEntity() {
    this->_skeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}

