#include "RekindledTotem.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "DBDOutlineComponent.h"

class AActor;


void ARekindledTotem::OnParentTotemEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason) {
}




ARekindledTotem::ARekindledTotem() {
    this->_outlineStrategy = CreateDefaultSubobject<USourceBasedOutlineUpdateStrategy>(TEXT("Outline Strategy"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("Outline Component"));
}

