#include "GeneratorEntity.h"
#include "MontagePlayer.h"

class AGenerator;

void AGeneratorEntity::SetSkeletalMeshActive(bool active) {
}

void AGeneratorEntity::SetAssociatedGenerator(AGenerator* generator) {
}

void AGeneratorEntity::PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) {
}

UMontagePlayer* AGeneratorEntity::GetMontagePlayer() const {
    return NULL;
}

AGeneratorEntity::AGeneratorEntity() {
    this->_associatedGenerator = NULL;
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("MontagePlayer"));
}

