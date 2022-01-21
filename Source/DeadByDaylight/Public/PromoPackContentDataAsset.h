#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPromoPackContentType.h"
#include "PromoPackContentTypeData.h"
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

