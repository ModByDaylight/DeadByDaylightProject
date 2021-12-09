#include "ActorsInRangeBool.h"

FActorsInRangeBool::FActorsInRangeBool() {
    this->_actorPairQueryComponent = NULL;
    this->_sourceActor = NULL;
    this->_otherActor = NULL;
    this->_range = 0.00f;
    this->_inRange = false;
}

