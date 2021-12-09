#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaDeepLinkAnalytics.generated.h"

USTRUCT()
struct FAtlantaDeepLinkAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DeepLinkURL;
    
    UPROPERTY()
    FString CampaignName;
    
    DBDANALYTICS_API FAtlantaDeepLinkAnalytics();
};

