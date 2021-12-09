#pragma once
#include "CoreMinimal.h"
#include "HasObjectState.h"
#include "HasObjectStateWithMaxDuration.generated.h"

UCLASS()
class COMPETENCE_API UHasObjectStateWithMaxDuration : public UHasObjectState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _maxDuration;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMaxDuration(float duration);
    
    UHasObjectStateWithMaxDuration();
};

