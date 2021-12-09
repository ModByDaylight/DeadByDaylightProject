#pragma once
#include "CoreMinimal.h"
#include "ReportData.generated.h"

USTRUCT()
struct FReportData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Type;
    
    UPROPERTY()
    FString Reason;
    
    UPROPERTY()
    FString Comment;
    
    DEADBYDAYLIGHT_API FReportData();
};

