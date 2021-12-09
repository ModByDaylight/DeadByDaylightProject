#pragma once
#include "CoreMinimal.h"
#include "EReverseBearTrapUIState.h"
#include "PigStatusData.generated.h"

USTRUCT(BlueprintType)
struct FPigStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EReverseBearTrapUIState ReverseBearTrapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimerProgress;
    
    DBDUIVIEWINTERFACES_API FPigStatusData();
};

