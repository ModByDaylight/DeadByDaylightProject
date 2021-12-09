#pragma once
#include "CoreMinimal.h"
#include "AffectedMaterialAndVariant.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FAffectedMaterialAndVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* AffectedMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* MaterialVariant;
    
    DEADBYDAYLIGHT_API FAffectedMaterialAndVariant();
};

