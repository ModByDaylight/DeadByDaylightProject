#include "DBDAIBTController.h"
#include "DBDAIPerceptionComponent.h"
#include "DBDNavMeshExplorerComponent.h"
#include "DBDBehaviorTreeComponent.h"
#include "DBDPathFollowingComponent.h"
#include "DBDBlackboardComponent.h"
#include "DBDAIStateComponent.h"
#include "DBDAIGoalComponent.h"

class AActor;

void ADBDAIBTController::OnPawnBump(AActor* selfActor, AActor* otherActor, FVector normalImpulse, const FHitResult& hit) {
}

void ADBDAIBTController::Authority_FinishedPlaying() {
}

ADBDAIBTController::ADBDAIBTController() : Super(FObjectInitializer::Get()
    .SetDefaultSubobjectClass(TEXT("PathFollowingComponent"), UDBDPathFollowingComponent::StaticClass())) {
    this->BehaviorTree = NULL;
    this->ListenToAttackEvents = false;
    this->_dbdPerception = CreateDefaultSubobject<UDBDAIPerceptionComponent>(TEXT("DBDAIPerceptionComponent"));
    this->_dbdBlackboard = CreateDefaultSubobject<UDBDBlackboardComponent>(TEXT("DBDBlackboadComponent"));
    this->_dbdPathFollowing = CastChecked<UDBDPathFollowingComponent>(GetPathFollowingComponent());
    this->_dbdBehaviorTree = CreateDefaultSubobject<UDBDBehaviorTreeComponent>(TEXT("DBDBehaviorTreeComponent"));
    this->_navMeshExplorer = CreateDefaultSubobject<UDBDNavMeshExplorerComponent>(TEXT("DBDNavMeshExplorerComponent"));
    this->_aiState = CreateDefaultSubobject<UDBDAIStateComponent>(TEXT("AIStateComponent"));
    this->_aiGoal = CreateDefaultSubobject<UDBDAIGoalComponent>(TEXT("AIGoalComponent"));
}

