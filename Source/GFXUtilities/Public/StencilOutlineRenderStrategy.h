#pragma once
#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "StencilOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;
class UMaterialInterface;

UCLASS()
class GFXUTILITIES_API UStencilOutlineRenderStrategy : public UBaseOutlineRenderStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> _replacementMaterials;
    
    UPROPERTY(Export, Transient)
    TArray<UBatchMeshCommands*> _translucentCopies;
    
public:
    UStencilOutlineRenderStrategy();
};

