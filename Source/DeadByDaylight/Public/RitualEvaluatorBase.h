#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RitualEvent.h"
#include "RitualEvaluatorBase.generated.h"

UCLASS(Blueprintable)
class URitualEvaluatorBase : public UObject {
    GENERATED_BODY()
public:
    URitualEvaluatorBase();
    UFUNCTION(BlueprintNativeEvent)
    bool EvaluateEvent(const FRitualEvent& ritualEvent);
    
};

