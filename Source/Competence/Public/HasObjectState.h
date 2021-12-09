#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "HasObjectState.generated.h"

UCLASS()
class COMPETENCE_API UHasObjectState : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag _state;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetState(FGameplayTag state);
    
    UHasObjectState();
};

