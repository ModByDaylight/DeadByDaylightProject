#include "YellowGlyphComponent.h"

class AGlyph;

void UYellowGlyphComponent::TriggerSkillCheck(float currentTickerLocation) {
}



void UYellowGlyphComponent::OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type) {
}

void UYellowGlyphComponent::OnLevelReadyToPlay() {
}

void UYellowGlyphComponent::Multicast_TeleportGlyph_Implementation(FVector location) {
}

AGlyph* UYellowGlyphComponent::GetOwningGlyph() const {
    return NULL;
}

bool UYellowGlyphComponent::Authority_TeleportGlyph(int32 maxNumberOfTries) {
    return false;
}

UYellowGlyphComponent::UYellowGlyphComponent() {
    this->_currentlyInteractingPlayer = NULL;
    this->_skillCheckDuration = 1.20f;
    this->_skillCheckZoneLength = 0.20f;
    this->_skillCheckDelay = 0.50f;
    this->_skillCheckAverageDistance = 0.50f;
    this->_skillCheckDistanceVariance = 0.10f;
    this->_teleportDelay = 2;
}

