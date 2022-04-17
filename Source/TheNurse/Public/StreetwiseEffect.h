#pragma once
#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "StreetwiseEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UStreetwiseEffect : public UBaseLingeringStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _range;
    
public:
    UStreetwiseEffect();
private:
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
};

