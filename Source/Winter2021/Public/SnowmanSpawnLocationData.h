#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnowmanSpawnLocationData.generated.h"

USTRUCT(BlueprintType)
struct FSnowmanSpawnLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector OriginLocation;
    
    UPROPERTY(Transient)
    TArray<FVector> NavmeshLocations;
    
    WINTER2021_API FSnowmanSpawnLocationData();
};

