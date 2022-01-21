#pragma once
#include "CoreMinimal.h"
#include "BHVRAnalytics.h"
#include "DBDAnalytics.generated.h"

UCLASS(BlueprintType)
class UDBDAnalytics : public UBHVRAnalytics {
    GENERATED_BODY()
public:
    UDBDAnalytics();
    UFUNCTION(BlueprintCallable)
    static void RecordGameProgress(const FString& InProgressType);
    
};

