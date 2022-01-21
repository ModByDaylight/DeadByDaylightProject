#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "BoonTotemIsActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBoonTotemIsActive : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UBoonTotemIsActive();
};

