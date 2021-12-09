#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UITweenMaterialVectorProperties.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class UITWEEN_API UUITweenMaterialVectorProperties : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UUITweenMaterialVectorProperties();
};

