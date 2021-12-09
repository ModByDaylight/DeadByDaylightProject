#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SnowmanSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FSnowmanSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector SpawnLocation;
    
    UPROPERTY(Transient)
    FRotator SpawnRotation;
    
    WINTER2021_API FSnowmanSpawnData();
};

