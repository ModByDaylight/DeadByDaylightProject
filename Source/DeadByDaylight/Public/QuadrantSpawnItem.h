#pragma once
#include "CoreMinimal.h"
#include "EQuadrantSpawnType.h"
#include "WeightedItem.h"
#include "QuadrantSpawnItem.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantSpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EQuadrantSpawnType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeightedItem> Elements;
    
    DEADBYDAYLIGHT_API FQuadrantSpawnItem();
};

