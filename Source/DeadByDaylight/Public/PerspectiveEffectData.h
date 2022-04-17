#pragma once
#include "CoreMinimal.h"
#include "PerspectiveEffectActivationEventDelegate.h"
#include "EPerspectiveActivationCondition.h"
#include "PerspectiveEffectData.generated.h"

USTRUCT(BlueprintType)
struct FPerspectiveEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool WantsActive;
    
    UPROPERTY(BlueprintReadWrite)
    FPerspectiveEffectActivationEvent ActivationEvent;
    
    UPROPERTY(BlueprintReadWrite)
    EPerspectiveActivationCondition Condition;
    
    DEADBYDAYLIGHT_API FPerspectiveEffectData();
};

