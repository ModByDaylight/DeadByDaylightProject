#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "OnEventBaseAddon.generated.h"

UCLASS()
class DBDCOMPETENCE_API UOnEventBaseAddon : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _eventToListenTo;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventFired(const FGameEventData& gameEventData);
    
public:
    UOnEventBaseAddon();
};

