#include "RenjirosBloodyGlove.h"

class ABloodOrb;
class AActor;

void URenjirosBloodyGlove::Authority_OnBloodOrbOverlapBegin(const AActor* overlappingActor, const ABloodOrb* bloodOrb) {
}

URenjirosBloodyGlove::URenjirosBloodyGlove() {
    this->_revealTime = 0.00f;
}

