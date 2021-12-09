#include "NavigationQueryFilter_Camper.h"

UNavigationQueryFilter_Camper::UNavigationQueryFilter_Camper() {
    this->SlasherAreaBoundsLimit = 3200.00f;
    this->SlasherAreaPenetrationCost = 10000.00f;
    this->SlasherInSightCost = 0.00f;
    this->SlasherAreaExcludeUnderRange = 400.00f;
    this->SlasherInExcludeAreaCost = 1000000.00f;
}

