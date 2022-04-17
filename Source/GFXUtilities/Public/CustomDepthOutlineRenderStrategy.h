#pragma once
#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "CustomDepthOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;
class UMaterialInterface;

UCLASS()
class GFXUTILITIES_API UCustomDepthOutlineRenderStrategy : public UBaseOutlineRenderStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMaterialInterface* _replacementMaterial;
    
    UPROPERTY(Export, Transient)
    TArray<UBatchMeshCommands*> _translucentCopies;
    
public:
    UCustomDepthOutlineRenderStrategy();
};

