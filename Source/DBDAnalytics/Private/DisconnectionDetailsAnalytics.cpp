#include "DisconnectionDetailsAnalytics.h"

FDisconnectionDetailsAnalytics::FDisconnectionDetailsAnalytics() {
    this->InGameTime = 0;
    this->Role = EPlayerRole::VE_None;
    this->Health = EHealthStatus::Healthy;
    this->GeneratorActivated = 0;
    this->HatchStatus = EHatchStatus::Hidden;
    this->DoorStatus = EDoorStatus::Closed;
    this->DisconnectionType = EGameState::VE_Active;
}

