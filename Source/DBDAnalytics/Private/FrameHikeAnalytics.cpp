#include "FrameHikeAnalytics.h"

FFrameHikeAnalytics::FFrameHikeAnalytics() {
    this->FrameDeltaTime = 0.00f;
    this->TimeSinceApplicationStarted = 0.00f;
    this->CurrentTimeoutThreshold = 0.00f;
    this->IsOverConnectionTimeLimit = false;
    this->FlushAsyncLoadingTime = 0.00f;
    this->FlushAsyncLoadingCount = 0;
    this->SyncLoadCount = 0;
}

