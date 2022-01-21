#pragma once
#include "CoreMinimal.h"
#include "CompositeModifierCondition.h"
#include "AndModifierCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UAndModifierCondition : public UCompositeModifierCondition {
    GENERATED_BODY()
public:
    UAndModifierCondition();
};

