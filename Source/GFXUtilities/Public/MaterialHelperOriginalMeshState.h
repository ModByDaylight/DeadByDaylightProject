#pragma once
#include "CoreMinimal.h"
#include "MaterialHelperOriginalMeshState.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct GFXUTILITIES_API FMaterialHelperOriginalMeshState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> _originalMaterials;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> _originalDynamicMaterials;
    
    FMaterialHelperOriginalMeshState();
};

