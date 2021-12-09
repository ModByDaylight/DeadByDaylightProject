#include "EscapeRequirementTracker.h"

void UEscapeRequirementTracker::OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UEscapeRequirementTracker::UEscapeRequirementTracker() {
    this->_dbdGameState = NULL;
}

