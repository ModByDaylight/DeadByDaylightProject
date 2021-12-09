#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CustomerSupportAnalytics.generated.h"

USTRUCT()
struct FCustomerSupportAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FCustomerSupportAnalytics();
};

