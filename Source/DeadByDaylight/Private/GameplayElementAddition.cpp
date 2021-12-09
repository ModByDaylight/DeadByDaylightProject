#include "GameplayElementAddition.h"

FGameplayElementAddition::FGameplayElementAddition() {
    this->_spawnerType = EGameplayElementType::Generic;
    this->_numberToAdd = 0;
    this->_numberToAddAffectedByOffering = false;
}

