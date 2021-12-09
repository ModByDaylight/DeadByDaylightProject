#include "UMGAtlantaPromoCodePopup.h"

void UUMGAtlantaPromoCodePopup::PromoCodeCommitted(const FText& name, TEnumAsByte<ETextCommit::Type> commitType) {
}

UUMGAtlantaPromoCodePopup::UUMGAtlantaPromoCodePopup() {
    this->RewardPanel = NULL;
    this->RewardWidgetContainer = NULL;
    this->RewardItemWidgetMax = 4;
    this->RewardItemWidgetRevealDelay = 0.50f;
    this->CodePanel = NULL;
    this->PromoCodeInputTextBox = NULL;
    this->InvalidIcon = NULL;
}

