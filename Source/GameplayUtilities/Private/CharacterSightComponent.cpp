#include "CharacterSightComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"

void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float value) {
}

void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float value) {
}

void UCharacterSightComponent::SetMinimumCharacterScreenPercent(float value) {
}

void UCharacterSightComponent::SetMaximumSightDistance(float value) {
}

void UCharacterSightComponent::Server_UpdateDiscernedCharacters_Implementation(const TArray<ACharacter*>& characters) {
}
bool UCharacterSightComponent::Server_UpdateDiscernedCharacters_Validate(const TArray<ACharacter*>& characters) {
    return true;
}

void UCharacterSightComponent::OnRep_DiscernibleCharacters() {
}

void UCharacterSightComponent::OnRep_CanSee() {
}

void UCharacterSightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterSightComponent, _discernedCharacters);
    DOREPLIFETIME(UCharacterSightComponent, _canSee);
}

UCharacterSightComponent::UCharacterSightComponent() {
    this->_minimumCharacterScreenPercent = 0.00f;
    this->_minimumCharacterVisiblePixelsPercent = 0.30f;
    this->_maximumSightDistance = 0.00f;
    this->_screenVisibilityZoneRadiusPercent = 0.30f;
    this->_sightingDelay = 0.00f;
    this->_discerningDelay = 0.00f;
    this->_undiscerningDelay = 0.00f;
    this->_sightableCharacterClass = ACharacter::StaticClass();
    this->_debugMode = false;
    this->_canSee = true;
}

