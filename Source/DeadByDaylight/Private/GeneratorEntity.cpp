#include "GeneratorEntity.h"

class AGenerator;
class UMontagePlayer;

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
}

