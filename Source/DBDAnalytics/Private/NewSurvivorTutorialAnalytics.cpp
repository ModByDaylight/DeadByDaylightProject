#include "NewSurvivorTutorialAnalytics.h"

FNewSurvivorTutorialAnalytics::FNewSurvivorTutorialAnalytics() {
    this->IsLookAroundComplete = false;
    this->IsWalkAroundComplete = false;
    this->IsRunningComplete = false;
    this->IsCrouchComplete = false;
    this->IsFirstVaultComplete = false;
    this->TimeToCompleteAreaOne = 0;
    this->IsGeneratorComplete = false;
    this->IsSecondVaultComplete = false;
    this->TimeToCompleteAreaTwo = 0;
    this->IsBeartrapComplete = false;
    this->TimeToCompleteAreaThree = 0;
    this->IsPalletComplete = false;
    this->IsUnhookMegComplete = false;
    this->IsLockerComplete = false;
    this->IsGetUnhookedComplete = false;
    this->IsHealMegComplete = false;
    this->IsGetHealedComplete = false;
    this->IsOpenGateComplete = false;
    this->IsEscapeComplete = false;
    this->TimeToCompleteAreaFour = 0;
    this->TotalTimeInTutorial = 0;
}

