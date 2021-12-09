#include "DBDNavMeshExplorerComponent.h"

UDBDNavMeshExplorerComponent::UDBDNavMeshExplorerComponent() {
    this->ExploreAtAgentMoveDistance = 100.00f;
    this->ExploreAtInterval = 2.00f;
    this->FullyAutoExploredAtGameTime = 300;
    this->_pathFollowingComponent = NULL;
}

