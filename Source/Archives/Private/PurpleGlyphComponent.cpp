#include "PurpleGlyphComponent.h"

class ADBDPlayer;
class AGlyph;




void UPurpleGlyphComponent::OnLevelReadyToPlay() {
}

ADBDPlayer* UPurpleGlyphComponent::GetTrackedPlayer() {
    return NULL;
}

AGlyph* UPurpleGlyphComponent::GetOwningGlyph() const {
    return NULL;
}

void UPurpleGlyphComponent::Authority_StartMoveWithAcceleration(const FVector& goalLocation) {
}

void UPurpleGlyphComponent::Authority_MoveTo(FVector location) {
}

FVector UPurpleGlyphComponent::Authority_GetNextLocation() {
    return FVector{};
}

void UPurpleGlyphComponent::Authority_AbortMoveWithDeceleration() {
}

void UPurpleGlyphComponent::Authority_AbortMove() {
}

UPurpleGlyphComponent::UPurpleGlyphComponent() {
    this->_navFilter = NULL;
    this->_bloodTrailSettings = NULL;
}

