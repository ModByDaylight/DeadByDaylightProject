#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTwinRecallReady.generated.h"

UCLASS()
class UIsTwinRecallReady : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UIsTwinRecallReady();
};

