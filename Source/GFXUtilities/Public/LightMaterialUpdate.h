#pragma once
#include "CoreMinimal.h"
#include "LightMaterialUpdate.generated.h"

class UMaterialHelper;

USTRUCT(BlueprintType)
struct GFXUTILITIES_API FLightMaterialUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    UMaterialHelper* material;
    
    UPROPERTY(EditAnywhere)
    FName propertyName;
    
    UPROPERTY(EditAnywhere)
    float multiplier;
    
    FLightMaterialUpdate();
};

