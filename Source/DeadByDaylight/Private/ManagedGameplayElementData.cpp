#include "ManagedGameplayElementData.h"

FManagedGameplayElementData::FManagedGameplayElementData() {
    this->PopulationType = EGameplayElementType::Generic;
    this->CurrentPopulationCost = 0.00f;
    this->MaxPopulationCost = 0;
    this->MinPopulationCost = 0;
    this->MapWidth = 0.00f;
    this->MinProximityBetweenElements = 0.00f;
    this->MinDistSqrBetweenElements = 0.00f;
    this->TileWidth = 0.00f;
    this->FactorToAdjustToWhenOutOfProximity = 0.00f;
}

