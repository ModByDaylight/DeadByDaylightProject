#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "IsPlayerPerformingInteraction.generated.h"

class UInteractionDefinition;

UCLASS()
class DBDCOMPETENCE_API UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _interactionSemantics;
    
private:
    UFUNCTION()
    void UpdateIsTrue(UInteractionDefinition* interactionDefinition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInteractionSemantics(const FGameplayTagContainer& interactionSemantics);
    
    UIsPlayerPerformingInteraction();
};

