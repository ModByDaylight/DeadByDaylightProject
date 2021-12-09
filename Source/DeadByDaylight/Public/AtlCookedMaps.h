#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtlCookedMapDescription.h"
#include "AtlCookedMaps.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAtlCookedMaps : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FAtlCookedMapDescription> Descriptions;
    
public:
    UAtlCookedMaps();
};

