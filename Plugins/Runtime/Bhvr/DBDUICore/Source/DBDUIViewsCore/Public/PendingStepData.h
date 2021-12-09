#pragma once
#include "CoreMinimal.h"
#include "PendingTutorialData.h"
#include "PendingStepData.generated.h"

USTRUCT(BlueprintType)
struct FPendingStepData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FPendingTutorialData> tutorialData;
    
    DBDUIVIEWSCORE_API FPendingStepData();
};

