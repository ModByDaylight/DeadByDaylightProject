#include "SurvivorOutlineUpdateStrategy.h"

class ASlasherPlayer;
class ACamperPlayer;
class UGameplayModifierContainer;

void USurvivorOutlineUpdateStrategy::SetTrappedIconActive(bool value) {
}

bool USurvivorOutlineUpdateStrategy::IsBlockingAuraReadingFromKiller(const ASlasherPlayer* killer) const {
    return false;
}

bool USurvivorOutlineUpdateStrategy::IsActivelyHidingAuraFromKiller(const ACamperPlayer* subject, const ASlasherPlayer* witness) {
    return false;
}

TArray<UGameplayModifierContainer*> USurvivorOutlineUpdateStrategy::GetEffectsProtectingFromKillerAuraReading(const ACamperPlayer* subject, const ASlasherPlayer* killer) {
    return TArray<UGameplayModifierContainer*>();
}

USurvivorOutlineUpdateStrategy::USurvivorOutlineUpdateStrategy() {
    this->_revealedGradient = NULL;
    this->_nonRevealedGradient = NULL;
    this->_trappedIconActive = false;
}

