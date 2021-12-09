#pragma once
#include "CoreMinimal.h"
#include "MaterialMap.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* SrcMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DstMaterial;
    
    GFXUTILITIES_API FMaterialMap();
};

