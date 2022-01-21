#pragma once
#include "CoreMinimal.h"
#include "BaseIsPerkUsableCondition.h"
#include "IsPerkUsableCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition {
    GENERATED_BODY()
public:
    UIsPerkUsableCondition();
};

