#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProtectionHitComponent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UProtectionHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void Authority_HandleProtectionScoringEvents();
    
    UProtectionHitComponent();
};

