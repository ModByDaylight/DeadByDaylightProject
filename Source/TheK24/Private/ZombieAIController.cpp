#include "ZombieAIController.h"

class ASlasherPlayer;
class AActor;

void AZombieAIController::OnSlasherSet(ASlasherPlayer* slasher) {
}

void AZombieAIController::Authority_OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus) {
}

AZombieAIController::AZombieAIController() {
    this->_zombieBehaviorTree = NULL;
    this->_chaseTargetSurvivor = NULL;
}

