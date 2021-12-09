#include "PathStrategy.h"

UPathStrategy::UPathStrategy() {
    this->RefreshPartialPathDelay = 3.00f;
    this->StartNextBranchBuildDelay = 0.50f;
    this->_aiOwner = NULL;
}

