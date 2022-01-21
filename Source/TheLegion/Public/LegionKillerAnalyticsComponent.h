#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LegionKillerAnalyticsComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ULegionKillerAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULegionKillerAnalyticsComponent();
    UFUNCTION(BlueprintCallable)
    void SetGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);
    
};

