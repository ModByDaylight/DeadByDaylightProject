#include "OuterlineComponent.h"

void UOuterlineComponent::SetIntensity(float intensity) {
}

UOuterlineComponent::UOuterlineComponent() {
    this->CloneCustomDepthMaterial = NULL;
    this->CloneTranslucentMaterial = NULL;
    this->_cloneCustomDepthMaterialDynamic = NULL;
    this->_cloneTranslucentMaterialDynamic = NULL;
    this->_customDepthSkeletalMesh = NULL;
    this->_overlaySkeletalMesh = NULL;
}

