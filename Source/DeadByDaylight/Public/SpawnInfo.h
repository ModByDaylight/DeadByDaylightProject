#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* ActorClass;
    
    UPROPERTY()
    FTransform Transform;
    
    DEADBYDAYLIGHT_API FSpawnInfo();
};

