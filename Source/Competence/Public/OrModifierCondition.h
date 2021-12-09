#pragma once
#include "CoreMinimal.h"
#include "CompositeModifierCondition.h"
#include "OrModifierCondition.generated.h"

UCLASS()
class COMPETENCE_API UOrModifierCondition : public UCompositeModifierCondition {
    GENERATED_BODY()
public:
    UOrModifierCondition();
};

