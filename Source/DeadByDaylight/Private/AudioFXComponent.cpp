#include "AudioFXComponent.h"

class UPrimitiveComponent;

void UAudioFXComponent::SetAudioAmbientDetector(UPrimitiveComponent* audioAmbientDetector) {
}

void UAudioFXComponent::OnLocallyObservedChanged(bool locallyObserved) {
}

void UAudioFXComponent::OnDeafenCompleted() {
}

void UAudioFXComponent::Deafen(float duration) {
}

UAudioFXComponent::UAudioFXComponent() {
    this->_audioAmbientDetector = NULL;
}

