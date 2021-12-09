#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OutlineConfiguration.h"
#include "OutlineColourConfiguration.h"
#include "DBDOutlineComponentConfiguration.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDOutlineComponentConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<UClass*, FOutlineConfiguration> OutlineConfigurations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FOutlineColourConfiguration> OutlineColours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* OutlineMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMaterialInterface*> DefaultTranslucencyMaterials;
    
public:
    UDBDOutlineComponentConfiguration();
};

