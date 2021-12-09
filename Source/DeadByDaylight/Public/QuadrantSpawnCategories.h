#pragma once
#include "CoreMinimal.h"
#include "QuadrantSpawnItem.h"
#include "QuadrantSpawnCategories.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantSpawnCategories {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName QuadrantSpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FQuadrantSpawnItem> Items;
    
    DEADBYDAYLIGHT_API FQuadrantSpawnCategories();
};

