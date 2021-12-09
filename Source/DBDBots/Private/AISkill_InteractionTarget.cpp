#include "AISkill_InteractionTarget.h"

UAISkill_InteractionTarget::UAISkill_InteractionTarget() {
    this->TargetRequirement = EInteractionTargetRequirements::BestTargetMustBeValid;
    this->AutoSwapBestStimulusWithBestTarget = false;
    this->StartMinRange = -1.00f;
    this->StartMaxRange = -1.00f;
    this->StopMinRange = -1.00f;
    this->StopMaxRange = -1.00f;
    this->StartMaxHalfAngle = 180.00f;
    this->StopMaxHalfAngle = 180.00f;
    this->IsMaxHalfAngle2D = true;
    this->TestMaxHalfAngleOnPath = false;
    this->MaxAngleFilterClass = NULL;
    this->InSightMode = EInteractionTargetInSightModes::None;
    this->OutOfSightModeDelay = 2.00f;
    this->TargetMoveAwayTooFastStopDelay = -1.00f;
    this->TargetMoveAwayTooFastCooldown = 8.00f;
    this->AlwaysStrafeAroundTarget = false;
}

