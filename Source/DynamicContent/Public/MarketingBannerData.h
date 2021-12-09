#pragma once
#include "CoreMinimal.h"
#include "BaseBannerData.h"
#include "MarketingBannerData.generated.h"

USTRUCT()
struct DYNAMICCONTENT_API FMarketingBannerData : public FBaseBannerData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText SubTitleId;
    
    UPROPERTY(Transient)
    FString DeepLink;
    
    FMarketingBannerData();
};

