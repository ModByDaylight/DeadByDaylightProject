#include "UMGAltantaRitual.h"


void UUMGAltantaRitual::BroadcastOnClaimRewardsButtonPressed(const int32 ritualId) {
}

UUMGAltantaRitual::UUMGAltantaRitual() {
    this->_claimText = FText::FromString(TEXT("CLAIM"));
    this->_claimedText = FText::FromString(TEXT("CLAIMED"));
    this->_completedText = FText::FromString(TEXT("COMPLETED"));
}

