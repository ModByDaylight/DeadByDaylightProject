#include "HookAnalytics.h"

FHookAnalytics::FHookAnalytics() {
    this->HookStartTime = 0.00f;
    this->SurvivorIsABot = 0;
    this->KillerIsABot = 0;
    this->RescuerIsABot = 0;
    this->TimesOnHook = 0;
    this->HookDuration = 0.00f;
    this->EscapeAttemptStart = 0;
    this->EscapeAttemptFull = 0;
    this->SurvivorsRemaining = 0;
    this->NumberOfActiveSurvivorsStart = 0;
    this->NumberOfActiveSurvivorsEnd = 0;
    this->NumberOfActiveSurvivorsTotal = 0;
    this->DurationCampFace = 0.00f;
    this->DurationCampHard = 0.00f;
    this->DurationCampSoft = 0.00f;
    this->NumberOfRescuers = 0;
    this->TimeForFirstRescuer = 0.00f;
    this->ReverseBearTrapOn = false;
}

