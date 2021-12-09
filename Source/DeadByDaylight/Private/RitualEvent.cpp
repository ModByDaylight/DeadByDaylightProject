#include "RitualEvent.h"

FRitualEvent::FRitualEvent() {
    this->ScoreType = EDBDScoreTypes::DBDCamperScore_SurviveHealthy;
    this->Amount = 0.00f;
    this->Instigator = NULL;
    this->InstigatorPlayerState = NULL;
    this->Target = NULL;
}

