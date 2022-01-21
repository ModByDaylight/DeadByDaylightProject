#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "EnduranceHighlightEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UEnduranceHighlightEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UEnduranceHighlightEffect();
};

