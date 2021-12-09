#include "InteractionAnalytics.h"

FInteractionAnalytics::FInteractionAnalytics() {
    this->Role = EPlayerRole::VE_None;
    this->InterruptionSuccessCount = 0;
    this->InterruptionFailureCount = 0;
    this->InteractionPredictedCount = 0;
    this->InteractionAuthorizedCount = 0;
    this->InteractionDeniedByRaceConditionCount = 0;
    this->InteractionDeniedByTimeoutCount = 0;
    this->InteractionDeniedByErrorCount = 0;
}

