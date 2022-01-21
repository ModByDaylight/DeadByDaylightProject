#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumCooldownInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumCooldownInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _cooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _cameraPitchRecenterTime;
    
public:
    UBlightedSerumCooldownInteraction();
};

