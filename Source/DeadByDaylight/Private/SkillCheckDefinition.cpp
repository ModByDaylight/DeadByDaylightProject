#include "SkillCheckDefinition.h"

FSkillCheckDefinition::FSkillCheckDefinition() {
    this->SuccessZoneStart = 0.00f;
    this->SuccessZoneEnd = 0.00f;
    this->BonusZoneLength = 0.00f;
    this->BonusZoneStart = 0.00f;
    this->ProgressRate = 0.00f;
    this->StartingTickerPosition = 0.00f;
    this->IsDeactivatedAfterResponse = false;
    this->WarningSoundDelay = 0.00f;
    this->IsAudioMuted = false;
    this->IsJittering = false;
    this->IsSuccessZoneMirrorred = false;
    this->IsInsane = false;
}

