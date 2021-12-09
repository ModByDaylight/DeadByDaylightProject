#include "BloodOrbConfiguratorComponent.h"

class UBloodOrbVisibilityComponent;
class ADBDPlayer;
class UBloodOrbAbsorberComponent;

void UBloodOrbConfiguratorComponent::UpdateSurvivorBloodOrbVisibilityRange(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, const ADBDPlayer* killer) const {
}

void UBloodOrbConfiguratorComponent::UpdateKillerBloodOrbVisiblityRanges(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, ADBDPlayer* killer) const {
}

void UBloodOrbConfiguratorComponent::UpdateBloodOrbAttractSpeed(UBloodOrbAbsorberComponent* bloodOrbAbsorberComponent, ADBDPlayer* killer) const {
}

void UBloodOrbConfiguratorComponent::OnLevelReadyToPlay() {
}

void UBloodOrbConfiguratorComponent::Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(const ADBDPlayer* killer) const {
}

UBloodOrbConfiguratorComponent::UBloodOrbConfiguratorComponent() {
    this->_bloodOrbClass = NULL;
    this->_fadeDuration = 0.00f;
    this->_initialFadeOutDelay = 0.00f;
    this->_bloodOrbVisibilityRangeInterpolationSpeed = 0.00f;
    this->_mobileBloodOrbRendererClass = NULL;
}

