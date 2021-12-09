#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsOwningPlayerLastSurvivor.generated.h"

UCLASS()
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsOwningPlayerLastSurvivor();
};

