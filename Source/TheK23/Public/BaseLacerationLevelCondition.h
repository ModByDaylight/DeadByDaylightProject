#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "BaseLacerationLevelCondition.generated.h"

UCLASS(Abstract)
class THEK23_API UBaseLacerationLevelCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UBaseLacerationLevelCondition();
};

