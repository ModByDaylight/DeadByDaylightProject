#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "Winter2021EventComponent.generated.h"

class USnowmanSpawnPlacementStrategy;
class ASnowman;

UCLASS(meta=(BlueprintSpawnableComponent))
class UWinter2021EventComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _numbSnowmenToSpawnAtStart;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USnowmanSpawnPlacementStrategy> _snowmanSpawnPlacementStrategyClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASnowman> _snowmanClass;
    
    UPROPERTY(Export, Transient)
    USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy;
    
    UPROPERTY(Transient)
    TArray<ASnowman*> _snowmen;
    
public:
    UWinter2021EventComponent();
private:
    UFUNCTION(Exec)
    void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);
    
    UFUNCTION(Exec)
    void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);
    
    UFUNCTION(Exec)
    void DBD_Winter2021RecalculateSpawnPoints();
    
    UFUNCTION(Exec)
    void DBD_Winter2021ForceRespawnAllSnowmen();
    
};

