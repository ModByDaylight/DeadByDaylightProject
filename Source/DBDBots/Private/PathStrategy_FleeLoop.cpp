#include "PathStrategy_FleeLoop.h"

UPathStrategy_FleeLoop::UPathStrategy_FleeLoop() {
    this->CanBranchUnderEndPathDistance = 500.00f;
    this->RejectLoopBranchUnderEndPointsDistance = 800.00f;
    this->RejectBranchPointNearerHostileSourceDistance = 800.00f;
    this->RejectBranchUnderNavLinkDistance = 600.00f;
    this->AddDistanceToRequiredBranchEvadeGap = 200.00f;
}

