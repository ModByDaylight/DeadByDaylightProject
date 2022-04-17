#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ZombiesManagement.generated.h"

class AZombieCharacter;
class UZombiesPatrolAreaManager;
class UAuthoritativeActorPoolComponent;
class AZombieEscapeDoorPointsActor;

UCLASS()
class AZombiesManagement : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _zombiePool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UZombiesPatrolAreaManager* _zombiesPatrolAreaManager;
    
    UPROPERTY(Transient)
    TArray<AZombieCharacter*> _spawnedZombiesArray;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _firstZombieSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _numberOfZombieToSpawnAtStart;
    
    UPROPERTY(Transient)
    TArray<AZombieEscapeDoorPointsActor*> _zombieEscapeDoorPoints;
    
public:
    AZombiesManagement();
private:
    UFUNCTION()
    void Authority_OnIntroComplete();
    
};

