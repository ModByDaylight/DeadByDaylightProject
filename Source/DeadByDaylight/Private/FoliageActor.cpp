#include "FoliageActor.h"
#include "FoliageDensityHISM.h"

AFoliageActor::AFoliageActor() {
    this->_foliageHISM = CreateDefaultSubobject<UFoliageDensityHISM>(TEXT("HISM"));
}

