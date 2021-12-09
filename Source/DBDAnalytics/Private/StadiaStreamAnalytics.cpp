#include "StadiaStreamAnalytics.h"

FStadiaStreamAnalytics::FStadiaStreamAnalytics() {
    this->NetworkDelayForInputTime = 0.00f;
    this->NetworkDelayForVideoTime = 0.00f;
    this->PercentFramesAbove60FPS = 0.00f;
    this->PercentFramesBelow60FPS = 0.00f;
    this->PercentFramesBelow45FPS = 0.00f;
    this->PercentFramesBelow30FPS = 0.00f;
    this->PercentFramesBelow20FPS = 0.00f;
}

