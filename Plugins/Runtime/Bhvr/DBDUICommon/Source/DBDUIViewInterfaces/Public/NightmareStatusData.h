#pragma once
#include "CoreMinimal.h"
#include "ESleepingUIState.h"
#include "NightmareStatusData.generated.h"

USTRUCT(BlueprintType)
struct FNightmareStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESleepingUIState SleepingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SleepingProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SleepProtectionRemainingDuration;
    
    DBDUIVIEWINTERFACES_API FNightmareStatusData();
};

