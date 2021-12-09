#include "OngoingScoreData.h"

FOngoingScoreData::FOngoingScoreData() {
    this->ScoreType = EDBDScoreTypes::DBDCamperScore_SurviveHealthy;
    this->TimeSinceScore = 0.00f;
    this->ApplyScoreTimeout = 0.00f;
    this->AccumulatedPercent = 0.00f;
    this->Target = NULL;
    this->CustomObjectParameter = NULL;
}

