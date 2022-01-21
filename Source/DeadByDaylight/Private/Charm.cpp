#include "Charm.h"
#include "Components/SkeletalMeshComponent.h"

void ACharm::BeginDestroySequence_Internal_Implementation() {
}

ACharm::ACharm() {
    this->_skeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharmSkeletalMeshComponent"));
    this->_actorVfx = NULL;
}

