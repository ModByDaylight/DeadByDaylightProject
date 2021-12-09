#pragma once
#include "CoreMinimal.h"
#include "OutlineConfiguration.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FOutlineConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> TranslucencyMaterials;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> LocallyControlledTranslucencyMaterials;
    
    DEADBYDAYLIGHT_API FOutlineConfiguration();
};

