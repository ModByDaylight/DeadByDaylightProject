#pragma once
#include "CoreMinimal.h"
#include "PromoPackContentTypeData.h"
#include "EPromoPackContentType.h"
#include "Engine/DataAsset.h"
#include "PromoPackContentDataAsset.generated.h"

UCLASS()
class UPromoPackContentDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EPromoPackContentType, FPromoPackContentTypeData> Data;
    
public:
    UPromoPackContentDataAsset();
};

