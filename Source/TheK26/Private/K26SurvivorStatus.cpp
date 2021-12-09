#include "K26SurvivorStatus.h"

FK26SurvivorStatus::FK26SurvivorStatus() {
    this->IsPowerAttached = false;
    this->IsAttachementAuraOn = false;
    this->LastAttachmentTime = 0.00f;
    this->LastDetachmentTime = 0.00f;
    this->LastRemovalStarted = 0.00f;
    this->LastRemovalStopped = 0.00f;
    this->LastHitTime = 0.00f;
    this->StatusIndicator = NULL;
    this->OwningSurvivor = NULL;
    this->K26KillerInstinctStatusEffect = NULL;
}

