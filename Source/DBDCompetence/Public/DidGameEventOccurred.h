#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "DidGameEventOccurred.generated.h"

UCLASS()
class UDidGameEventOccurred : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag EventTag;
    
public:
    UDidGameEventOccurred();
};

