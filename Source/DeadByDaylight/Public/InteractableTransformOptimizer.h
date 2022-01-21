#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableTransformOptimizer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractableTransformOptimizer : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _optimizeTransformUpdate;
    
public:
    UInteractableTransformOptimizer();
};

