#include "CharacterChaseVisualComponent.h"

class ADBDPlayer;

void UCharacterChaseVisualComponent::OnObservedCharacterChange(ADBDPlayer* player) {
}

void UCharacterChaseVisualComponent::OnAllChaseEnd() {
}

UCharacterChaseVisualComponent::UCharacterChaseVisualComponent() {
    this->_vignetteMeshComp = NULL;
    this->_fovModifyFactor = 100.00f;
}

