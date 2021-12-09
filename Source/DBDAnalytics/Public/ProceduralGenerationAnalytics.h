#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ProceduralGenerationAnalytics.generated.h"

USTRUCT()
struct FProceduralGenerationAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 GenerationSeed;
    
    UPROPERTY()
    int32 MapSeed;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    FString Procedural_MeatLocker_Small;
    
    UPROPERTY()
    FString Procedural_MeatLocker_Big;
    
    UPROPERTY()
    FString Procedural_Searchable;
    
    UPROPERTY()
    FString Procedural_EdgeObjects;
    
    UPROPERTY()
    FString Procedural_LivingWorldObjects;
    
    UPROPERTY()
    FString Procedural_Hatch;
    
    UPROPERTY()
    FString Procedural_BookShelves;
    
    UPROPERTY()
    FString Procedural_BreakableWalls;
    
    UPROPERTY()
    FString Procedural_Totems;
    
    UPROPERTY()
    FString Procedural_QuadrantSpawn;
    
    UPROPERTY()
    int32 PalletSpawned;
    
    UPROPERTY()
    int32 PalletProceduralMin;
    
    UPROPERTY()
    int32 PalletProceduralMax;
    
    UPROPERTY()
    int32 PalletProcedural;
    
    UPROPERTY()
    int32 PalletProceduralSetCount;
    
    UPROPERTY()
    uint32 PalletGenerationId;
    
    UPROPERTY()
    int32 PalletGeneric;
    
    UPROPERTY()
    FString KillerSpawn;
    
    UPROPERTY()
    FString SurvivorSpawn;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 HookSpawned;
    
    UPROPERTY()
    bool UseFixedMaps;
    
    UPROPERTY()
    float NavmeshGenerationTime;
    
    DBDANALYTICS_API FProceduralGenerationAnalytics();
};

