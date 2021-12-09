#include "AtlantaRitualInstance.h"

FAtlantaRitualInstance::FAtlantaRitualInstance() {
    this->CharacterId = 0;
    this->Role = EPlayerRole::VE_None;
    this->Evaluator = NULL;
    this->Progress = 0.00f;
    this->Active = false;
}

