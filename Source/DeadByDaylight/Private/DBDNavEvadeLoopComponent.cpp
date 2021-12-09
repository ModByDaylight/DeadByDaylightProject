#include "DBDNavEvadeLoopComponent.h"
#include "NavigationQueryFilter_EvadeLoop.h"

void UDBDNavEvadeLoopComponent::OnLevelReadyToPlay() {
}

UDBDNavEvadeLoopComponent::UDBDNavEvadeLoopComponent() {
    this->EvadeDoorFrontPointOffset = 90.00f;
    this->EvadeDoorSideOffset = 60.00f;
    this->SideBlockerOffset = 300.00f;
    this->AutoSnapPointsUpHeight = 20.00f;
    this->AutoSnapPointsDownHeight = 1000.00f;
    this->AutoSnapCollisionChannel = ECC_Pawn;
    this->EvadeLoopFilterClass = UNavigationQueryFilter_EvadeLoop::StaticClass();
    this->MinSafetyLength = 600.00f;
    this->MaxSafetyLength = 2300.00f;
    this->LimitToSide = EAIEvadeLoopSides::Count;
    this->DebugEditMode = false;
    this->DrawDebugFilter = false;
}

