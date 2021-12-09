#pragma once
#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_SolveSickness.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SolveSickness : public UAISkill_FindInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter UrgencyGoalWeight;
    
    UAISkill_FindInteractable_SolveSickness();
};

