#include "InteractionAudioComponent.h"

class UAkAudioEvent;

bool UInteractionAudioComponent::PostAkEvent(UAkAudioEvent* akEvent) {
    return false;
}

UInteractionAudioComponent::UInteractionAudioComponent() {
    this->_audioComponent = NULL;
}

