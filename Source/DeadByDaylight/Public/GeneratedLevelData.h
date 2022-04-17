#pragma once
#include "CoreMinimal.h"
#include "ESurvivorGrouping.h"
#include "Dependency.h"
#include "ArrayOfSceneComponent.h"
#include "ForceSpawnTileData.h"
#include "ManagedGameplayElementData.h"
#include "GeneratedLevelData.generated.h"

class USceneComponent;
class AActor;

USTRUCT(BlueprintType)
struct FGeneratedLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString UsedPaperTileMap;
    
    UPROPERTY(BlueprintReadOnly)
    FString PremadeMap;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StreamRelatedSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AvailableEscapeCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AvailableSurvivorItemCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESurvivorGrouping GroupingType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* KillerSpawnPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> SurvivorSpawnPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> InteractableElementsSpawnPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, int32> SpecialBehaviourRequestCounts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FArrayOfSceneComponent> SpecialBehaviourSpawnPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> SearchableSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> HexSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> KillerLairSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> HatchSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> MainBuildingHatchSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> ShackHatchSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> BreakableWallSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<USceneComponent*> EscapeSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FManagedGameplayElementData BookshelfManagedGameplayElementData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FManagedGameplayElementData MeatHookManagedGameplayElementData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDependency> LevelDependencies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDependency> LateLevelDependencies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> FixedMapTileIds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> FixedMapOrphanSpawners;
    
    UPROPERTY(BlueprintReadOnly)
    FName SpecialEventId;
    
    UPROPERTY()
    bool UseForcedMap;
    
    UPROPERTY()
    bool UsePremadeMap;
    
    UPROPERTY()
    FString GenerationLogs;
    
    UPROPERTY()
    FString GenerationErrors;
    
    UPROPERTY()
    int32 GenerationPlayerCount;
    
    UPROPERTY()
    TArray<FForceSpawnTileData> ForceSpawnTileData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> LevelLightings;
    
    DEADBYDAYLIGHT_API FGeneratedLevelData();
};

