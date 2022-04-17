#include "SkillCheckResponse.h"

FSkillCheckResponse::FSkillCheckResponse() {
    this->ChargeChange = 0.00f;
    this->IsTriggeredByInput = false;
    this->IsSuccessful = false;
    this->IsBonus = false;
    this->IsInsane = false;
    this->IsTriggeringLoudNoise = false;
    this->FailedCountedAsGood = false;
    this->Type = ESkillCheckCustomType::VE_None;
    this->Interaction = NULL;
    this->VerificationKey = 0;
}

