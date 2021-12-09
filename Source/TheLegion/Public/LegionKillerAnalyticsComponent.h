#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LegionKillerAnalyticsComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType)
class ULegionKillerAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);
    
    ULegionKillerAnalyticsComponent();
};

