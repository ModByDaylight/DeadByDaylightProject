#include "ProceduralGenerationAnalytics.h"

FProceduralGenerationAnalytics::FProceduralGenerationAnalytics() {
    this->GenerationSeed = 0;
    this->MapSeed = 0;
    this->PalletSpawned = 0;
    this->PalletProceduralMin = 0;
    this->PalletProceduralMax = 0;
    this->PalletProcedural = 0;
    this->PalletProceduralSetCount = 0;
    this->PalletGenerationId = 0;
    this->PalletGeneric = 0;
    this->HookSpawned = 0;
    this->UseFixedMaps = false;
    this->NavmeshGenerationTime = 0.00f;
}

