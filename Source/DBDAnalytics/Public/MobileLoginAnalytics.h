#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "MobileLoginAnalytics.generated.h"

USTRUCT()
struct FMobileLoginAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LoginMethod;
    
    UPROPERTY()
    FString AuthenticationContext;
    
    UPROPERTY()
    bool IsMigrationAccount;
    
    DBDANALYTICS_API FMobileLoginAnalytics();
};

