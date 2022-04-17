#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventDrivenModifierCondition.h"
#include "DidGameEventOccurred.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDidGameEventOccurred : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag EventTag;
    
public:
    UDidGameEventOccurred();
};

