#include "ScoreValue.h"

FScoreValue::FScoreValue() {
    this->Category = EDBDScoreCategory::DBD_CamperScoreCat_Objectives;
    this->BloodpointValue = 0;
    this->MaxBloodpointValue = 0;
    this->BloodpointDepreciationCurve = NULL;
    this->OngoingWaitTime = 0.00f;
}

