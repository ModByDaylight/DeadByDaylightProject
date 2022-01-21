#pragma once
#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "ExhaustedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UExhaustedEffect : public UAdjustableCooldownStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CooldownModifier;
    
public:
    UExhaustedEffect();
};

