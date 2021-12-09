#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsSubjectInteractingWithOriginatingPlayer.generated.h"

UCLASS()
class DBDCOMPETENCE_API UIsSubjectInteractingWithOriginatingPlayer : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsSubjectInteractingWithOriginatingPlayer();
};

