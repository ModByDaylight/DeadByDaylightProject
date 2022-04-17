#pragma once
#include "CoreMinimal.h"
#include "MaterialOriginalState.generated.h"

class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FMaterialOriginalState {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UMeshComponent* MeshWithChangedMaterials;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> OriginalMaterial;
    
    DEADBYDAYLIGHT_API FMaterialOriginalState();
};

