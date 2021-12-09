#include "SurvivorTutorialAnalytics.h"

FSurvivorTutorialAnalytics::FSurvivorTutorialAnalytics() {
    this->SecondsSpentInTutorial = 0;
    this->SecondsSpentInIntroSection = 0;
    this->SecondsSpentInSkillchecksSection = 0;
    this->SecondsSpentInKillerSection = 0;
    this->SecondsSpentInStealthSection = 0;
    this->SecondsSpentInHookSection = 0;
    this->SecondsSpentInHealthSection = 0;
    this->SecondsSpentInRescueSection = 0;
    this->SecondsSpentInEscapeSection = 0;
    this->WasScratchMarksAndWildlifeEventTriggered = false;
    this->WasRushedActionEventTriggered = false;
    this->WasSuccessfulStealthEventTriggered = false;
    this->WasStealthObjectiveCompleted = false;
    this->WasHatchEscapeObjectiveCompleted = false;
}

