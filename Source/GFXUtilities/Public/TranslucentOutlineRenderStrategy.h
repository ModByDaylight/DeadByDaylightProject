#pragma once
#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "TranslucentOutlineRenderStrategy.generated.h"

class UMaterialInterface;

UCLASS()
class GFXUTILITIES_API UTranslucentOutlineRenderStrategy : public UBaseOutlineRenderStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> _replacementMaterials;
    
public:
    UTranslucentOutlineRenderStrategy();
};

