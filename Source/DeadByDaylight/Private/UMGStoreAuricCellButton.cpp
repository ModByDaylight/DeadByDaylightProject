#include "UMGStoreAuricCellButton.h"



void UUMGStoreAuricCellButton::ReportInvalidPercentage(float percentage) {
}

bool UUMGStoreAuricCellButton::HasBonusExpired(const FDateTime endDate) {
    return false;
}

UUMGStoreAuricCellButton::UUMGStoreAuricCellButton() {
    this->AuricCellTitleText = NULL;
    this->Timer = NULL;
}

