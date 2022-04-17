#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventDrivenModifierCondition.h"
#include "HasFlag.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasFlag : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _flag;
    
public:
    UHasFlag();
};

