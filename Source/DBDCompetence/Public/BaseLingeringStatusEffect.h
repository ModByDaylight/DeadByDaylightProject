#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BaseLingeringStatusEffect.generated.h"

UCLASS(Abstract)
class DBDCOMPETENCE_API UBaseLingeringStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _lingerDuration;
    
    UFUNCTION(BlueprintCallable)
    void SetLingerDuration(float lingerDuration);
    
    UFUNCTION(BlueprintCallable)
    void Authority_DeactivateEffect();
    
    UFUNCTION(BlueprintCallable)
    void Authority_ActivateEffect();
    
public:
    UBaseLingeringStatusEffect();
};

