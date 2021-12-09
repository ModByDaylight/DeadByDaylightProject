#include "FrameTravelTimeAnalytics.h"

FFrameTravelTimeAnalytics::FFrameTravelTimeAnalytics() {
    this->FrameIssuedToClientArrivalTotalTime = 0.00f;
    this->FrameIssuedToBeginRenderingTime = 0.00f;
    this->FrameRenderingTime = 0.00f;
    this->FrameEncodingTime = 0.00f;
    this->FrameFinishedEncodingToClientArrivalTime = 0.00f;
}

