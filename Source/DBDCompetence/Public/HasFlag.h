#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "HasFlag.generated.h"

UCLASS()
class UHasFlag : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _flag;
    
public:
    UHasFlag();
};

