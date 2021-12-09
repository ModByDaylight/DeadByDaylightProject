#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "OnboardingAnalytics.generated.h"

USTRUCT()
struct FOnboardingAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TabIndex;
    
    UPROPERTY()
    int32 GameManualIndex;
    
    UPROPERTY()
    FString EventTimeStamp;
    
    DBDANALYTICS_API FOnboardingAnalytics();
};

