#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "MaterialExpressionBHVRCustomColorOutput.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionBHVRCustomColorOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionBHVRCustomColorOutput();
};

