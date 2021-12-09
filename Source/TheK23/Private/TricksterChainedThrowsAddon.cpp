#include "TricksterChainedThrowsAddon.h"

UTricksterChainedThrowsAddon::UTricksterChainedThrowsAddon() {
    this->_resetOnEnteringFlurryInteraction = false;
    this->_lacerationPenaltyRangeThreshold = 1600.00f;
    this->_closeRangeLacerationPenalty = -0.50f;
    this->_maximumMultiplier = 1.00f;
}

