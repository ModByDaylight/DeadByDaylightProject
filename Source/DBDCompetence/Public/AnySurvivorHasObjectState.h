#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventDrivenModifierCondition.h"
#include "AnySurvivorHasObjectState.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnySurvivorHasObjectState : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag _stateTag;
    
public:
    UAnySurvivorHasObjectState();
protected:
    UFUNCTION()
    void OnSurvivorRemoved(ACamperPlayer* survivor);
    
    UFUNCTION()
    void OnSurvivorAdded(ACamperPlayer* survivor);
    
};

