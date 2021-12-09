#include "TerrorRadiusEmitterComponent.h"

class UTerrorRadiusReceiverComponent;

void UTerrorRadiusEmitterComponent::SetTerrorRadius(float radius) {
}

void UTerrorRadiusEmitterComponent::SetSimulatedFixedDistance(float distance) {
}

void UTerrorRadiusEmitterComponent::SetIsActive(bool active) {
}

void UTerrorRadiusEmitterComponent::SetImitatesAudioOnly(bool imitatesAudioOnly) {
}

void UTerrorRadiusEmitterComponent::SetGeneratesChaseMusic(bool generatesChaseMusic) {
}

void UTerrorRadiusEmitterComponent::RemoveEmitterFromList() {
}

bool UTerrorRadiusEmitterComponent::IsInTerrorRadius(const UTerrorRadiusReceiverComponent* receiver) const {
    return false;
}

float UTerrorRadiusEmitterComponent::GetSimulatedFixedDistance() const {
    return 0.0f;
}

float UTerrorRadiusEmitterComponent::GetRadius() const {
    return 0.0f;
}

bool UTerrorRadiusEmitterComponent::GetIsActive() const {
    return false;
}

bool UTerrorRadiusEmitterComponent::GetImitatesAudioOnly() const {
    return false;
}

bool UTerrorRadiusEmitterComponent::GetGeneratesChaseMusic() const {
    return false;
}

UTerrorRadiusEmitterComponent::UTerrorRadiusEmitterComponent() {
    this->_simulatedFixedDistance = -1.00f;
    this->_imitatesAudioOnly = true;
    this->_generatesChaseMusic = true;
    this->_active = true;
    this->_isFakeTerrorRadius = false;
    this->_radius = 0.00f;
}

