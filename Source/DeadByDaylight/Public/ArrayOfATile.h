#pragma once
#include "CoreMinimal.h"
#include "ArrayOfATile.generated.h"

class ATile;

USTRUCT(BlueprintType)
struct FArrayOfATile {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<ATile*> ArrayOfTiles;
    
    DEADBYDAYLIGHT_API FArrayOfATile();
};

