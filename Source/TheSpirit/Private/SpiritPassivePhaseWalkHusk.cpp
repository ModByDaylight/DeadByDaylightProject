#include "SpiritPassivePhaseWalkHusk.h"
#include "Components/SkeletalMeshComponent.h"

class UCustomizedSkeletalMesh;

void ASpiritPassivePhaseWalkHusk::SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value) {
}

void ASpiritPassivePhaseWalkHusk::SetPassivePhaseWalkHuskVisibility(bool visible) {
}

void ASpiritPassivePhaseWalkHusk::InitializeSpiritPassivePhaseWalkHusk(const UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy) {
}



void ASpiritPassivePhaseWalkHusk::CaptureSpiritPose() {
}

ASpiritPassivePhaseWalkHusk::ASpiritPassivePhaseWalkHusk() {
    this->_huskMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HuskMesh"));
    this->_huskCustomizedSkeletalMesh = CreateDefaultSubobject<UCustomizedSkeletalMesh>(TEXT("CustomizedSkeletalMesh"));
}

