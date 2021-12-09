#include "SurvivorStatusComponent.h"

void USurvivorStatusComponent::OnValidatedInteractionStarted() {
}

void USurvivorStatusComponent::OnValidatedInteractionEnded() {
}

void USurvivorStatusComponent::OnSuvivorDamaged(const ECamperDamageState oldDamageState, const ECamperDamageState newDamageState) {
}


void USurvivorStatusComponent::OnRunningAndMovementChanged(const bool isRunningAndMoving) {
}

void USurvivorStatusComponent::OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState) {
}

void USurvivorStatusComponent::OnHookedStateChanged() {
}

void USurvivorStatusComponent::OnGuidedStateChanged() {
}

void USurvivorStatusComponent::OnCrouchChanged(const bool isCrouched) {
}

bool USurvivorStatusComponent::IsSleeping() const {
    return false;
}

bool USurvivorStatusComponent::IsRunning() const {
    return false;
}

bool USurvivorStatusComponent::IsInjured() const {
    return false;
}

bool USurvivorStatusComponent::IsHooked() const {
    return false;
}

bool USurvivorStatusComponent::IsHiding() const {
    return false;
}

bool USurvivorStatusComponent::IsHealing() const {
    return false;
}

bool USurvivorStatusComponent::IsHarpooned() const {
    return false;
}

bool USurvivorStatusComponent::IsGettingStrangled() const {
    return false;
}

bool USurvivorStatusComponent::IsGettingSacrificed() const {
    return false;
}

bool USurvivorStatusComponent::IsDying() const {
    return false;
}

bool USurvivorStatusComponent::IsDead() const {
    return false;
}

bool USurvivorStatusComponent::IsCrouching() const {
    return false;
}

bool USurvivorStatusComponent::IsCaptured() const {
    return false;
}

void USurvivorStatusComponent::GetMovementSpeed(float& currentMovementSpeed, float& percentMovementSpeed, float& maximumMovementSpeed) const {
}

USurvivorStatusComponent::USurvivorStatusComponent() {
    this->_survivor = NULL;
}

