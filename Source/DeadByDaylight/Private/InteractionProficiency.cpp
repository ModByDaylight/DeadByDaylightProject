#include "InteractionProficiency.h"

class UChargeableInteractionDefinition;
class ADBDPlayer;

float UInteractionProficiency::GetValue_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const {
    return 0.0f;
}

EStatusEffectType UInteractionProficiency::GetType_Implementation(const float value) const {
    return EStatusEffectType::None;
}

int32 UInteractionProficiency::GetLevel_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const {
    return 0;
}

bool UInteractionProficiency::GetIsActive_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const {
    return false;
}

UInteractionProficiency::UInteractionProficiency() {
}

