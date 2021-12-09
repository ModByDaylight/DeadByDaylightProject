#include "ConjoinedTwin.h"

void AConjoinedTwin::Server_SendAttackInput_Implementation(bool pressed) {
}
bool AConjoinedTwin::Server_SendAttackInput_Validate(bool pressed) {
    return true;
}

void AConjoinedTwin::OnFinishedPlayingEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}


void AConjoinedTwin::Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData) {
}

AConjoinedTwin::AConjoinedTwin() {
    this->_twinLullabyAudioComponent = NULL;
}

