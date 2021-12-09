#include "EffectsLocator.h"

class AActor;


void AEffectsLocator::OnLeaveCollisionArea(AActor* OverlappedActor, AActor* OtherActor) {
}


void AEffectsLocator::OnEnterCollisionArea(AActor* OverlappedActor, AActor* OtherActor) {
}


AEffectsLocator::AEffectsLocator() {
    this->ActorCaptureRadius = 200.00f;
}

