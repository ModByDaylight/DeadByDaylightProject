#include "KrakenRequestAnalytics.h"

FKrakenRequestAnalytics::FKrakenRequestAnalytics() {
    this->ResponseCode = 0;
    this->ProviderError = 0;
    this->AttemptCount = 0;
    this->Success = false;
    this->CanRetry = false;
    this->WillRetry = false;
    this->AttemptElapsedTime = 0.00f;
    this->TotalElapsedTime = 0.00f;
    this->TotalElapsedTimeCapped = 0.00f;
}

