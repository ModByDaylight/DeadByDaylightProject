#include "PostGame_KillerAnalytics.h"

FPostGame_KillerAnalytics::FPostGame_KillerAnalytics() {
    this->Brutality = 0;
    this->Deviousness = 0;
    this->Hunter = 0;
    this->Sacrifice = 0;
    this->EscapeesCount = 0;
    this->SacrificedCount = 0;
    this->KilledCount = 0;
    this->DisconnectCount = 0;
    this->BotCount = 0;
    this->TimeOpenGate = 0;
    this->GeneratorsDone = 0;
    this->EGS_time = 0.00f;
    this->EGS_duration = 0.00f;
    this->EGS_sacrifice = 0;
    this->EGS_reachEnd = false;
    this->UsedController = false;
    this->UsedKeyboard = false;
}

