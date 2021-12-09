#include "DisarmBearTrapInteraction.h"

UDisarmBearTrapInteraction::UDisarmBearTrapInteraction() {
    this->_averageMaxVelocity = 100.00f;
    this->_averageMaxVelocitySquared = 10000.00f;
    this->_updateMontageID = TEXT("BearTrapDisarm_Out");
    this->_loudNoiseAudibleRangeTunable = TEXT("LoudNoiseRange_DisarmBearTrap");
}

