#include "CharacterSightableComponent.h"

ESightStatus UCharacterSightableComponent::GetHighestSightStatus() const {
    return ESightStatus::OutOfSight;
}

UCharacterSightableComponent::UCharacterSightableComponent() {
}

