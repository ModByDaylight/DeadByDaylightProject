#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParadiseData.h"
#include "LevelParadise.generated.h"

class USceneComponent;
class ADBDPlayer;

UCLASS()
class ALevelParadise : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LoopStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LoopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* MainPlayerSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<USceneComponent*> OtherSurvivorSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<USceneComponent*> ParadiseTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ParadiseViewTarget;
    
private:
    UPROPERTY(Transient)
    ADBDPlayer* _spawnedMainPawn;
    
    UPROPERTY(Export, Transient)
    USceneComponent* _runnerComponent;
    
public:
    ALevelParadise();
    UFUNCTION(BlueprintCallable)
    void ParadiseEntered(const FParadiseData& playerData);
    
private:
    UFUNCTION()
    void OnInterpolationDone();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void EnterParadise(const FParadiseData& playerData);
    
};

