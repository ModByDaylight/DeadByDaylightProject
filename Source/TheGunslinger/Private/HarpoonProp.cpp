#include "HarpoonProp.h"
#include "Components/SkeletalMeshComponent.h"

AHarpoonProp::AHarpoonProp() {
    this->_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
}

