#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UITweenMaterialScalarProperties.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class UITWEEN_API UUITweenMaterialScalarProperties : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UUITweenMaterialScalarProperties();
};

