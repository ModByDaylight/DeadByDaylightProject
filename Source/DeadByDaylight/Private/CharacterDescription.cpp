#include "CharacterDescription.h"

FCharacterDescription::FCharacterDescription() {
    this->CharacterIndex = 0;
    this->Role = EPlayerRole::VE_None;
    this->Difficulty = ECharacterDifficulty::VE_Easy;
    this->HudIcon = NULL;
    this->AvailableIfDlcInstalled = false;
    this->IsInChunk0 = false;
    this->IsAvailableInNonViolentBuild = false;
    this->IsAvailableInAtlantaBuild = false;
    this->PlatformExclusiveFlag = 0;
    this->Gender = EGender::VE_Male;
    this->KillerHeight = EKillerHeight::Short;
    this->HideStoreCustomizations = false;
}

