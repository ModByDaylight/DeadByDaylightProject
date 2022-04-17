#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBasementType.h"
#include "EQuadrantSpawnType.h"
#include "UObject/NoExportTypes.h"
#include "EPathType.h"
#include "EscapeStrategyType.h"
#include "ETileType.h"
#include "EDensity.h"
#include "UObject/NoExportTypes.h"
#include "Tile.generated.h"

class UTileSpawnPoint;
class UObjectRandomizer;
class UActorSpawner;
class UActorVariationSpawner;

UCLASS()
class DEADBYDAYLIGHT_API ATile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool RerunConstructionScript;
    
    UPROPERTY(EditAnywhere)
    int32 MinimumSpacing;
    
    UPROPERTY(EditAnywhere)
    int32 MaximumSpacing;
    
    UPROPERTY(EditAnywhere)
    bool DiagonalSpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TypeSpacing;
    
    UPROPERTY(EditAnywhere)
    int32 MaximumCount;
    
    UPROPERTY(EditAnywhere)
    FVector2D Dimension;
    
    UPROPERTY(EditAnywhere)
    TArray<EscapeStrategyType> AvailableEscapeTypes;
    
    UPROPERTY(EditAnywhere)
    ETileType Type;
    
    UPROPERTY(EditAnywhere)
    EDensity Density;
    
    UPROPERTY(EditAnywhere)
    EPathType Path;
    
    UPROPERTY(EditAnywhere)
    int32 Number;
    
    UPROPERTY(EditAnywhere)
    bool PlaceHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnPriorityTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    FVector2D Coord;
    
    UPROPERTY(EditAnywhere)
    EQuadrantSpawnType QuadrantSpawnType;
    
    UPROPERTY(EditAnywhere)
    EBasementType BasementType;
    
    UPROPERTY(Export, Transient)
    TArray<UTileSpawnPoint*> SpawnPointsCache;
    
    UPROPERTY(Export, Transient)
    TArray<UObjectRandomizer*> ObjectRandomizersCache;
    
    UPROPERTY(Export, Transient)
    TArray<UActorSpawner*> ActorSpawnersCache;
    
    UPROPERTY(Export, Transient)
    TArray<UActorVariationSpawner*> ActorVariationSpawnersCache;
    
    UPROPERTY(BlueprintReadOnly)
    FRandomStream SharedTileRandomizer;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Initialized)
    bool _initialized;
    
public:
    ATile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetSpawnObject(UTileSpawnPoint* tileSpawnPoint, AActor* spawnedObject);
    
protected:
    UFUNCTION()
    void OnRep_Initialized(bool oldValue);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllTileSpawned();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void InitOnSpawned();
    
};

