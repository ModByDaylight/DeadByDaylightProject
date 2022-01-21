#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumCollisionInteraction.generated.h"

class UBlightedSerumCooldownInteraction;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumCollisionInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBlightedSerumCooldownInteraction* _cooldownInteraction;
    
    UPROPERTY(EditDefaultsOnly)
    float _bounceTime;
    
public:
    UBlightedSerumCollisionInteraction();
    UFUNCTION(BlueprintCallable)
    void SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction);
    
};

