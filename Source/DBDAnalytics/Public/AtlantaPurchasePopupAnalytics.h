#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaPurchasePopupAnalytics.generated.h"

USTRUCT()
struct FAtlantaPurchasePopupAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString OfferId;
    
    UPROPERTY()
    FString Price;
    
    UPROPERTY()
    bool IsPurchased;
    
    DBDANALYTICS_API FAtlantaPurchasePopupAnalytics();
};

