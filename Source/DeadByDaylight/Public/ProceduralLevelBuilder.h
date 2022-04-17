#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GeneratedLevelData.h"
#include "GameFramework/Actor.h"
#include "Dependency.h"
#include "UObject/NoExportTypes.h"
#include "ETileSpawnPointType.h"
#include "GenerationParams.h"
#include "ProceduralLevelBuilder.generated.h"

class UDBDDesignTunables;
class UTileBank;
class UPaperTileMap;
class UObjectLibrary;
class ATile;
class UMapData;
class UProceduralGenerationData;
class UTileMatrix;
class UActorSpawner;
class AProceduralLevelData;
class ADBDClientSyncer;
class UBlackboardComponent;
class UEdgeObjectHandlingStrategy;

UCLASS()
class DEADBYDAYLIGHT_API AProceduralLevelBuilder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PathToMapDirectory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PathToTilesDirectory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KillerMinProximityFromCamper;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SurvivorMinProximityFromOtherCamper;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinProximityBetweenGenerators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinProximityBetweenChests;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinProximityBetweenTotems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SurvivorMinProximityFromGenerator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SurvivorMinProximityFromTotem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SurvivorMaxLineOfSightFromTotem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinProximityBetweenSpecialBehaviourItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpecialBehaviourItemMinProximityFromSurvivor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpecialBehaviourItemMinProximityFromKiller;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPaperTileMap> DebugMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<ATile>> DebugTiles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmallMeatLockerMinProximityFromKillerLair;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FactorToAdjustToWhenOutOfProximity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FactorToAdjustToWhenInLineOfSight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeightAmplifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeightAmplifierActivationHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UProceduralGenerationData* ProceduralGenerationData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TileWeightRateOfDecay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float QuadTileWeightRateOfDecay;
    
private:
    UPROPERTY()
    UClass* _tileClass;
    
    UPROPERTY()
    UMapData* _mapData;
    
    UPROPERTY()
    UObjectLibrary* _availableTilesLibrary;
    
    UPROPERTY()
    UObjectLibrary* _availableDerivedTileLibrary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDBDDesignTunables> DesignTunableClass;
    
    UPROPERTY(Transient)
    UDBDDesignTunables* _designTunables;
    
    UPROPERTY()
    FGeneratedLevelData _generatedData;
    
    UPROPERTY()
    TArray<FDependency> _escapeDependencies;
    
    UPROPERTY(Transient)
    UTileMatrix* _tileMatrix;
    
    UPROPERTY(Transient)
    UTileBank* _tileBank;
    
    UPROPERTY(Export, Transient)
    UActorSpawner* _killerLairSpawner;
    
    UPROPERTY(Transient)
    TArray<FSoftObjectPath> _preloadAssetReferences;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<AActor>> _chestItemAssetReferences;
    
    UPROPERTY(Transient)
    UClass* _slasherPawn;
    
    UPROPERTY(Transient)
    TArray<ATile*> _tilesThatHaveBeenSpawned;
    
    UPROPERTY(Transient)
    AProceduralLevelData* _debugProceduralDatas;
    
    UPROPERTY(Replicated, Transient)
    ADBDClientSyncer* _syncer;
    
    UPROPERTY(Export, Transient)
    UBlackboardComponent* _blackboardComp;
    
    UPROPERTY(Transient)
    UEdgeObjectHandlingStrategy* _edgeObjectHandlingStrategy;
    
    UPROPERTY(Transient)
    ATile* _backupKillerLairTile;
    
public:
    AProceduralLevelBuilder();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void SyncSeeds();
    
    UFUNCTION()
    void StartGenerationOnSyncerReady();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActor(UClass* actorClass, ETileSpawnPointType spawnPointType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveMist();
    
private:
    UFUNCTION()
    void OnMapLevelLoaded();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DebugShareGenerationData(FGenerationParams usedParams);
    
    UFUNCTION()
    void BuildFromSeed();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyMist(float modifier);
    
};

