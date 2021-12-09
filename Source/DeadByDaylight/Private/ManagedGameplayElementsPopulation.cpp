#include "ManagedGameplayElementsPopulation.h"

FManagedGameplayElementsPopulation::FManagedGameplayElementsPopulation() {
    this->Type = EGameplayElementType::Generic;
    this->MinDistance = 0.00f;
    this->MinPopulation = 0;
    this->MaxPopulation = 0;
}

