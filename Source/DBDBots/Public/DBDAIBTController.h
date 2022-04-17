#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDAIController.h"
#include "AISkillPerk.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "DBDAIBTController.generated.h"

class UDBDAIPerceptionComponent;
class UAISkill;
class UBehaviorTree;
class UDBDBehaviorTreeComponent;
class UDBDPathFollowingComponent;
class UDBDBlackboardComponent;
class UDBDNavMeshExplorerComponent;
class UDBDAIStateComponent;
class UDBDAIGoalComponent;
class AActor;

UCLASS()
class DBDBOTS_API ADBDAIBTController : public ADBDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    TArray<UAISkill*> BaseSkills;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    TArray<UAISkill*> RoleSkills;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FAISkillPerk> PerkSkills;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ListenToAttackEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDAIPerceptionComponent* _dbdPerception;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDBlackboardComponent* _dbdBlackboard;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDPathFollowingComponent* _dbdPathFollowing;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDBehaviorTreeComponent* _dbdBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDNavMeshExplorerComponent* _navMeshExplorer;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDAIStateComponent* _aiState;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDAIGoalComponent* _aiGoal;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, UBehaviorTree*> _setDynamicSubtrees;
    
    UPROPERTY(Transient)
    TArray<UAISkill*> _aiSkills;
    
public:
    ADBDAIBTController();
private:
    UFUNCTION()
    void OnPawnBump(AActor* selfActor, AActor* otherActor, FVector normalImpulse, const FHitResult& hit);
    
    UFUNCTION()
    void Authority_FinishedPlaying();
    
};

