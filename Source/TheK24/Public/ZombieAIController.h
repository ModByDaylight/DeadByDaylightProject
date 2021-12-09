#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "TunableStat.h"
#include "Perception/AIPerceptionTypes.h"
#include "ZombieAIController.generated.h"

class UBehaviorTree;
class UAIPerceptionComponent;
class ACamperPlayer;
class ASlasherPlayer;
class AActor;

UCLASS()
class AZombieAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* _zombieBehaviorTree;
    
    UPROPERTY(EditAnywhere, Export)
    UAIPerceptionComponent* _aiPerceptionComponent;
    
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _survivorInVision;
    
    UPROPERTY(Transient)
    ACamperPlayer* _chaseTargetSurvivor;
    
    UPROPERTY(Transient)
    FVector _goToLocation;
    
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _survivorsInAttackDetector;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieAttackHitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieAttackOpenTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieAnimSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieAnimDyingTime;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _zombieSightRadius;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _zombieLoseSightRadius;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _zombieVisionHalfAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieFallSmashTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieAttackCooldownTime;
    
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
    UFUNCTION()
    void Authority_OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus);
    
public:
    AZombieAIController();
};

