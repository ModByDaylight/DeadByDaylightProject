#include "ObjectPlacerComponent.h"

class UStaticMeshComponent;

void UObjectPlacerComponent::SetObjectMesh(UStaticMeshComponent* objectMesh) {
}

void UObjectPlacerComponent::SetIndicatorOffsetY(float y) {
}

void UObjectPlacerComponent::SetIndicatorOffsetX(float x) {
}

void UObjectPlacerComponent::SetHideIndicatorDuringAttack(bool enable) {
}

bool UObjectPlacerComponent::IsPlacementValid() const {
    return false;
}

FRotator UObjectPlacerComponent::GetObjectPlacementRotation() const {
    return FRotator{};
}

FVector UObjectPlacerComponent::GetObjectPlacementLocation() const {
    return FVector{};
}

void UObjectPlacerComponent::ActivateObjectPlacement(bool active) {
}

UObjectPlacerComponent::UObjectPlacerComponent() {
    this->_objectMesh = NULL;
    this->_socketName = TEXT("CamperAttach_SocketRT");
    this->_indicatorOffsetY = 0.00f;
    this->_indicatorOffsetX = 0.00f;
    this->_showIndicator = true;
    this->_stayActiveWhileItemInUse = false;
    this->_hideIndicatorDuringAttack = true;
    this->_objectPlacementUpdateStrategy = NULL;
    this->_objectPlacementValidationStrategy = NULL;
}

