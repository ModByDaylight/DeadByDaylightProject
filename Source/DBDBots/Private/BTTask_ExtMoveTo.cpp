#include "BTTask_ExtMoveTo.h"

UBTTask_ExtMoveTo::UBTTask_ExtMoveTo() {
    this->StrafeFocus = EExtMoveToStrafeFocusOptions::Never;
    this->StrafeFocusPitch = true;
    this->StrafeNearFocusModeUnderDistance = 300.00f;
    this->IntermittentOnStrafeFocusInterval = 4.00f;
    this->IntermittentOnStrafeFocusDeviation = 1.00f;
    this->IntermittentOffStrafeFocusInterval = 2.00f;
    this->IntermittentOffStrafeFocusDeviation = 0.50f;
    this->EndMoveStrafeFocusPrecisionAngle = 180.00f;
    this->StrafeFocusOwnerOnComponentBBKey = true;
    this->ToGoalMovementMode = ECharacterMovementTypes::Run;
    this->NearGoalMovementMode = ECharacterMovementTypes::Run;
    this->NearGoalModeUnderDistance = 300.00f;
    this->NormalMoveUnderNavLinkDistance = 150.00f;
    this->RepathInterval = 3.00f;
    this->UseAccelerationForPaths = true;
    this->PathReachedPointRadius = 70.00f;
}

