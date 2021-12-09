#include "DailyRitualInstance.h"

FDailyRitualInstance::FDailyRitualInstance() {
    this->DifficultyTier = 0;
    this->Progress = 0.00f;
    this->Threshold = 0.00f;
    this->Tolerance = 0.00f;
    this->DisplayThreshold = 0.00f;
    this->ExpReward = 0.00f;
    this->Active = false;
    this->IsNew = false;
    this->NbGameElapsed = 0;
}

