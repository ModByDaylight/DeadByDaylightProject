#include "GhostKillerAnalytics.h"

FGhostKillerAnalytics::FGhostKillerAnalytics() {
    this->Stalk = 0;
    this->StalkStealth = 0;
    this->Stalk25 = 0;
    this->Stalk50 = 0;
    this->Stalk75 = 0;
    this->Stalk100 = 0;
    this->StalkLean25 = 0;
    this->StalkLean50 = 0;
    this->StalkLean75 = 0;
    this->StalkLean100 = 0;
    this->Lean = 0;
    this->DownExposedSurvivor = 0;
    this->TimeInStealthMode = 0.00f;
}

