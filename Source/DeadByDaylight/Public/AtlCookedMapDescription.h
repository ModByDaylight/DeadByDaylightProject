#pragma once
#include "CoreMinimal.h"
#include "AtlCookedMapDescription.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAtlCookedMapDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ThemeName;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UWorld> MapAsset;
    
    FAtlCookedMapDescription();
};

