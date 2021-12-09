#include "InjectSerumInteraction.h"

class ASlasherPlayer;
class ACamperPlayer;


void UInjectSerumInteraction::OnKillerSet(ASlasherPlayer* killer) {
}

ACamperPlayer* UInjectSerumInteraction::GetInjectionTarget() const {
    return NULL;
}

void UInjectSerumInteraction::Authority_CureSurvivor(ACamperPlayer* camperPlayer) {
}

UInjectSerumInteraction::UInjectSerumInteraction() {
}

