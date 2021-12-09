#include "AISkill_InteractionTeleportEthereal_Blink.h"

UAISkill_InteractionTeleportEthereal_Blink::UAISkill_InteractionTeleportEthereal_Blink() {
    this->StartBlinkAtWarpLocationRange = 300.00f;
    this->ValidateBlinkWarpRange = 400.00f;
    this->BlinkAboveSavedPathLength = 800.00f;
    this->BlinkIfTargetWillBeInRange = 400.00f;
}

