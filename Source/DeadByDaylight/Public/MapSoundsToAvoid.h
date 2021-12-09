#pragma once
#include "CoreMinimal.h"
#include "MapSoundsToAvoid.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FMapSoundsToAvoid {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* Component;
    
    FMapSoundsToAvoid();
};

