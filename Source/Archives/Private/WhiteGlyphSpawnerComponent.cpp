#include "WhiteGlyphSpawnerComponent.h"

class AGlyph;

AGlyph* UWhiteGlyphSpawnerComponent::GetOwningGlyph() const {
    return NULL;
}

void UWhiteGlyphSpawnerComponent::Authority_OnLevelReadyToPlay() {
}

UWhiteGlyphSpawnerComponent::UWhiteGlyphSpawnerComponent() {
    this->_surfaceGlyphClass = NULL;
    this->_spawnDistanceDebug = 0.00f;
    this->_lastSurfaceGlyphComponentDebug = NULL;
}

