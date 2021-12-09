#include "ProceduralLevelData.h"

AProceduralLevelData::AProceduralLevelData() {
    this->GenerationSeed = 0;
    this->LevelMood = EKillerMoodInfluence::VE_None;
    this->PerksLevel = 0;
    this->SkipGameplayElementGeneration = false;
    this->_builder = NULL;
}

