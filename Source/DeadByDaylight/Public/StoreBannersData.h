#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "StoreFeaturedBannerData.h"
#include "EStoreBannerLocation.h"
#include "StoreBannersData.generated.h"

USTRUCT(BlueprintType)
struct FStoreBannersData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BannerId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStoreFeaturedBannerData BannerData;
    
    UPROPERTY(EditAnywhere)
    bool UseAsDefault;
    
    UPROPERTY(EditAnywhere)
    EStoreBannerLocation DefaultLocation;
    
    DEADBYDAYLIGHT_API FStoreBannersData();
};

