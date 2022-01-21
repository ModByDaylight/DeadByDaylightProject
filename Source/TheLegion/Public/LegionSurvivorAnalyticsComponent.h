#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "LegionSurvivorAnalyticsComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ULegionSurvivorAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULegionSurvivorAnalyticsComponent();
    UFUNCTION(BlueprintCallable)
    void SetGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);
    
private:
    UFUNCTION()
    void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

