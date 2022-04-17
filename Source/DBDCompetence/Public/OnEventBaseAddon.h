#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemAddon.h"
#include "GameEventData.h"
#include "OnEventBaseAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UOnEventBaseAddon : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _eventToListenTo;
    
public:
    UOnEventBaseAddon();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventFired(const FGameEventData& gameEventData);
    
};

