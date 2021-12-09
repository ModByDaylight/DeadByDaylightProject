#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "DBDPrimaryDataAsset.generated.h"

UCLASS(Abstract, BlueprintType)
class DEADBYDAYLIGHT_API UDBDPrimaryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FPrimaryAssetType AssetType;
    
    UDBDPrimaryDataAsset();
};

