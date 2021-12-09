#include "NewKillerTutorialAnalytics.h"

FNewKillerTutorialAnalytics::FNewKillerTutorialAnalytics() {
    this->IsKickGeneratorComplete = false;
    this->IsFollowSurvivorComplete = false;
    this->TimeToCompleteAreaOne = 0;
    this->IsDestroyPalletComplete = false;
    this->TimeToCompleteAreaTwo = 0;
    this->IsBeartrapComplete = false;
    this->IsHitSurvivorComplete = false;
    this->IsKoSurvivorComplete = false;
    this->IsPickupSurvivorComplete = false;
    this->IsHookSurvivorComplete = false;
    this->IsCloseHatchComplete = false;
    this->IsKillSurvivorComplete = false;
    this->TimeToCompleteAreaThree = 0;
    this->TotalTimeInTutorial = 0;
}

