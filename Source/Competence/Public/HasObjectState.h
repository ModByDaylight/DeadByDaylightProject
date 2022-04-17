#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventDrivenModifierCondition.h"
#include "HasObjectState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UHasObjectState : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag _state;
    
public:
    UHasObjectState();
    UFUNCTION(BlueprintCallable)
    void SetState(FGameplayTag state);
    
};

