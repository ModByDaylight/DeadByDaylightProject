#include "BetterTogether.h"

void UBetterTogether::OnStartedGeneratorRepair(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}

UBetterTogether::UBetterTogether() {
    this->ShouldRevealKiller = true;
    this->ShouldRevealSurvivors = true;
    this->RevealDistance = 3600.00f;
    this->_genToReveal = NULL;
    this->_durationByLevel[0] = 0.00f;
    this->_durationByLevel[1] = 0.00f;
    this->_durationByLevel[2] = 0.00f;
}

