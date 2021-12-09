#include "PostGame_SurvivorAnalytics.h"

FPostGame_SurvivorAnalytics::FPostGame_SurvivorAnalytics() {
    this->Objectives = 0;
    this->Survival = 0;
    this->Altruism = 0;
    this->Boldness = 0;
    this->DamageState = ECamperDamageState::VE_Healthy;
    this->HookedCount = 0;
    this->UsedController = false;
    this->UsedKeyboard = false;
}

