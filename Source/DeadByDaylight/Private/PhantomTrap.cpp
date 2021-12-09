#include "PhantomTrap.h"

class ASlasherPlayer;
class AActor;

bool APhantomTrap::IsTrapSet_Implementation() const {
    return false;
}

void APhantomTrap::InitializeTerrorRadiusEmitter(ASlasherPlayer* OwningSlasher) {
}


bool APhantomTrap::EvaluateLineOfSight(const FVector& start, const FVector& end, const AActor* ignoredActor) {
    return false;
}

APhantomTrap::APhantomTrap() {
    this->_lineOfSightTraceMinInterval = 0.10f;
}

