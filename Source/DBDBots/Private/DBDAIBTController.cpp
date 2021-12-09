#include "DBDAIBTController.h"

class AActor;

void ADBDAIBTController::OnPawnBump(AActor* selfActor, AActor* otherActor, FVector normalImpulse, const FHitResult& hit) {
}

void ADBDAIBTController::Authority_FinishedPlaying() {
}

ADBDAIBTController::ADBDAIBTController() {
    this->BehaviorTree = NULL;
    this->ListenToAttackEvents = false;
}

