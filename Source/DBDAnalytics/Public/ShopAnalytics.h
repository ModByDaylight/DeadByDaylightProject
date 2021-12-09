#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ShopAnalytics.generated.h"

USTRUCT()
struct FShopAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LogMessage;
    
    DBDANALYTICS_API FShopAnalytics();
};

