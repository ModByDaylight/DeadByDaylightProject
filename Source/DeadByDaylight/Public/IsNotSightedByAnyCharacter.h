#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsNotSightedByAnyCharacter.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UIsNotSightedByAnyCharacter : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsNotSightedByAnyCharacter();
};

