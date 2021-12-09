#include "BaseGroundDetectorComponent.h"

class USkinnedMeshComponent;

void UBaseGroundDetectorComponent::InitSkinnedMeshComponent(USkinnedMeshComponent* mesh) {
}

FVector UBaseGroundDetectorComponent::GetGroundPosition(const FVector targetPos, const FVector extraOffset) {
    return FVector{};
}

UBaseGroundDetectorComponent::UBaseGroundDetectorComponent() {
    this->_walkableCollisionChannel = ECC_WorldStatic;
    this->_traceComplex = false;
    this->_extraTraceDistance = 30.00f;
    this->_skinnedMeshComponent = NULL;
}

