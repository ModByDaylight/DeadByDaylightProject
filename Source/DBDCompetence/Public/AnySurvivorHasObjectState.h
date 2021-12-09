#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "AnySurvivorHasObjectState.generated.h"

class ACamperPlayer;

UCLASS()
class DBDCOMPETENCE_API UAnySurvivorHasObjectState : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag _stateTag;
    
protected:
    UFUNCTION()
    void OnSurvivorRemoved(ACamperPlayer* survivor);
    
    UFUNCTION()
    void OnSurvivorAdded(ACamperPlayer* survivor);
    
public:
    UAnySurvivorHasObjectState();
};

