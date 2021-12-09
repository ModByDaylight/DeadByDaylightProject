#include "DBDNavLinkCustomComponent.h"

void UDBDNavLinkCustomComponent::OnLevelReadyToPlay() {
}

UDBDNavLinkCustomComponent::UDBDNavLinkCustomComponent() {
    this->BaseLinkDirection = ENavLinkDirection::BothWays;
    this->AutoSnapSmartLinkPointsUpHeight = 0.00f;
    this->AutoSnapSmartLinkPointsDownHeight = 0.00f;
    this->AutoSnapCollisionChannel = ECC_Pawn;
    this->AutoSmartLinkDirectionMaxHeight = 0.00f;
    this->DisableSmartLinkOnPathObstruction = false;
    this->PathObstructionTestDistance = 200.00f;
    this->PathObstructionTestShapeRadius = 50.00f;
    this->PathObstructionTestHeightOffset = 80.00f;
    this->PathObstructionCollisionChannel = ECC_Pawn;
    this->DisableOtherSmartLinkInProximityOnEnable = false;
    this->EnableOtherSmartLinkInProximityOnDisable = false;
    this->OtherSmartLinkInProximitySearchDistance = 100.00f;
    this->ShowDebugInfo = false;
}

