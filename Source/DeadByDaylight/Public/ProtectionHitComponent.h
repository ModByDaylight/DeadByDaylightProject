#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProtectionHitComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UProtectionHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UProtectionHitComponent();
    UFUNCTION(BlueprintCallable)
    void Authority_HandleProtectionScoringEvents();
    
};

