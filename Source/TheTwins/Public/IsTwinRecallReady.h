#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTwinRecallReady.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsTwinRecallReady : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsTwinRecallReady();
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

