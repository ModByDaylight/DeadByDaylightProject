#pragma once
#include "CoreMinimal.h"
#include "MaterialReplacerData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialReplacerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> From;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> To;
    
    DEADBYDAYLIGHT_API FMaterialReplacerData();
};

