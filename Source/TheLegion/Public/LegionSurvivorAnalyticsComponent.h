#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "LegionSurvivorAnalyticsComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType)
class ULegionSurvivorAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);
    
private:
    UFUNCTION()
    void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    ULegionSurvivorAnalyticsComponent();
};

