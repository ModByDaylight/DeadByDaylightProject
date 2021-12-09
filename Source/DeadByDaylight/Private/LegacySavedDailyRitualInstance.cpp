#include "LegacySavedDailyRitualInstance.h"

FLegacySavedDailyRitualInstance::FLegacySavedDailyRitualInstance() {
    this->Progress = 0.00f;
    this->Threshold = 0.00f;
    this->Tolerance = 0.00f;
    this->DisplayThreshold = 0.00f;
    this->ExpReward = 0.00f;
    this->Active = false;
    this->Rewarded = false;
    this->StateChanged = false;
    this->NbGameElapsed = 0;
}

