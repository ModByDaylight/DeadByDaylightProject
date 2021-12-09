#include "ScreamComponent.h"

class UAkAudioEvent;

bool UScreamComponent::PlayScreamSoundAndAnimation(UAkAudioEvent* audioEvent, bool fireLoudNoiseEvent, FMontagePlaybackDefinition montageDefinition, float audibleRange) {
    return false;
}

bool UScreamComponent::PlayScreamSound(UAkAudioEvent* audioEvent, bool fireLoudNoiseEvent, float audibleRange) {
    return false;
}

bool UScreamComponent::CanScream() const {
    return false;
}

UScreamComponent::UScreamComponent() {
    this->_perkManager = NULL;
    this->_montagePlayer = NULL;
}

