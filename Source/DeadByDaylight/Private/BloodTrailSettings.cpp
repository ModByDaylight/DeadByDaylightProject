#include "BloodTrailSettings.h"

UBloodTrailSettings::UBloodTrailSettings() {
    this->_initialDelay = 0.10f;
    this->_numBloodDropsPerBloodPool = 2;
    this->_bloodDropsInterval = 0.20f;
    this->_randomlyRotateBloodDrops = true;
    this->_bloodDropsRandomScatter = 30.00f;
    this->_bloodTraceChannel = TraceTypeQuery5;
    this->_bloodDecalEffect = NULL;
    this->_recycleThresholdPercentage = 0.96f;
    this->_recycleDistancePercentage = 0.25f;
}

