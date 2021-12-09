#include "HexUndying.h"

class UGameplayModifierContainer;
class ACamperPlayer;

void UHexUndying::Authority_UpdateHexPerkStatusView(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable) {
}

void UHexUndying::Authority_OnSurvivorAdded(ACamperPlayer* survivor) {
}

void UHexUndying::Authority_OnCamperCleansedHexPerk(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}

UHexUndying::UHexUndying() {
    this->_revealAuraDistanceFromTotem[0] = 0.00f;
    this->_revealAuraDistanceFromTotem[1] = 0.00f;
    this->_revealAuraDistanceFromTotem[2] = 0.00f;
}

