#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ErrorAnalytics.generated.h"

USTRUCT()
struct FErrorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ErrorCategory;
    
    UPROPERTY()
    float FloatField1;
    
    UPROPERTY()
    float FloatField2;
    
    UPROPERTY()
    float FloatField3;
    
    UPROPERTY()
    FString StringField1;
    
    UPROPERTY()
    FString StringField2;
    
    UPROPERTY()
    FString StringField3;
    
    DBDANALYTICS_API FErrorAnalytics();
};

