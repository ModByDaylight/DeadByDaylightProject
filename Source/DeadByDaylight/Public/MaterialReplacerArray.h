#pragma once
#include "CoreMinimal.h"
#include "MaterialReplacerData.h"
#include "MaterialReplacerArray.generated.h"

USTRUCT(BlueprintType)
struct FMaterialReplacerArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMaterialReplacerData> MaterialsMap;
    
    DEADBYDAYLIGHT_API FMaterialReplacerArray();
};

