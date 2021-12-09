#include "ProceduralGenerationData.h"

UProceduralGenerationData::UProceduralGenerationData() {
    this->MaxSurvivorCount = 0;
    this->SurvivorItemPopulationProbability = NULL;
    this->EscapeStrategyPopulationProbability = NULL;
    this->ProceduralTileWidth = 0.00f;
    this->ProceduralTileHeight = 0.00f;
    this->ProceduralQuadTileCubeWidth = 500.00f;
    this->DifficultyModifier = 0.00f;
    this->CharacterCameraHeight = 140.00f;
    this->CharacterCollisionRadius = 0.00f;
    this->SpawnerCollisionRadius = 100.00f;
    this->TotemVisualHeight = 100.00f;
}

