#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CurrencyBalanceAnalytics.generated.h"

USTRUCT()
struct FCurrencyBalanceAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CurrencyName;
    
    UPROPERTY()
    int32 CurrencyBalance;
    
    DBDANALYTICS_API FCurrencyBalanceAnalytics();
};

