#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BaseLingeringStatusEffect.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBaseLingeringStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _lingerDuration;
    
public:
    UBaseLingeringStatusEffect();
protected:
    UFUNCTION(BlueprintCallable)
    void SetLingerDuration(float lingerDuration);
    
    UFUNCTION(BlueprintCallable)
    void Authority_DeactivateEffect();
    
    UFUNCTION(BlueprintCallable)
    void Authority_ActivateEffect();
    
};

