#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "BloodMarketRefreshAnalytics.generated.h"

USTRUCT()
struct FBloodMarketRefreshAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CharacterRole;
    
    UPROPERTY()
    int32 CurrencyCost;
    
    UPROPERTY()
    FString CurrencyUsed;
    
    UPROPERTY()
    FString RefreshMethod;
    
    DBDANALYTICS_API FBloodMarketRefreshAnalytics();
};

