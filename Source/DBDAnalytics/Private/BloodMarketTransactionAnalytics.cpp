#include "BloodMarketTransactionAnalytics.h"

FBloodMarketTransactionAnalytics::FBloodMarketTransactionAnalytics() {
    this->CurrencyCost = 0;
    this->CurrencyRemaining = 0;
    this->IsNextRowUnlocked = false;
    this->NumberOfItemsBoughtOnRow = 0;
    this->RowIndex = 0;
}

