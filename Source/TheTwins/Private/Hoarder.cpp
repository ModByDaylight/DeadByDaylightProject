#include "Hoarder.h"


float UHoarder::GetBubbleIndicatorLifetime() const {
    return 0.0f;
}

UHoarder::UHoarder() {
    this->_camperInteractItemPickupRevealRange[0] = 0.00f;
    this->_camperInteractItemPickupRevealRange[1] = 0.00f;
    this->_camperInteractItemPickupRevealRange[2] = 0.00f;
    this->_extraChestsSpawned[0] = 0;
    this->_extraChestsSpawned[1] = 0;
    this->_extraChestsSpawned[2] = 0;
    this->_bubbleIndicatorLifetime[0] = 0.00f;
    this->_bubbleIndicatorLifetime[1] = 0.00f;
    this->_bubbleIndicatorLifetime[2] = 0.00f;
    this->_showUniqueChestVisualPerState = true;
}

