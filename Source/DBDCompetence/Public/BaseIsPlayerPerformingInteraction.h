#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "BaseIsPlayerPerformingInteraction.generated.h"

class UInteractionDefinition;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer _interactionSemantics;
    
public:
    UBaseIsPlayerPerformingInteraction();
protected:
    UFUNCTION()
    void UpdateIsTrue(UInteractionDefinition* interactionDefinition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInteractionSemantics(const FGameplayTagContainer& interactionSemantics);
    
};

