#include "GlyphNavMovementComponent.h"

class AActor;

void UGlyphNavMovementComponent::SetMaxSpeed(float maxSpeed) {
}

void UGlyphNavMovementComponent::SetDeceleration(float deceleration) {
}

void UGlyphNavMovementComponent::SetAcceleration(float acceleration) {
}

AActor* UGlyphNavMovementComponent::GetGlyphOwner() const {
    return NULL;
}

UGlyphNavMovementComponent::UGlyphNavMovementComponent() {
    this->_glyphOwner = NULL;
    this->_pathFollowingComponent = NULL;
    this->bPositionCorrected = false;
    this->_maxSpeed = 0.00f;
    this->_acceleration = 0.00f;
    this->_deceleration = 0.00f;
    this->_brakingDeceleration = 0.00f;
}

