#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "ScreamSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UScreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool _screamTrigger;
    
public:
    UScreamSurvivorSubAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetScreamTrigger();
    
};

