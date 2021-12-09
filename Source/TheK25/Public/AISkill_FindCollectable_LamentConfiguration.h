#pragma once
#include "CoreMinimal.h"
#include "AISkill_FindCollectable.h"
#include "AITunableParameter.h"
#include "AISkill_FindCollectable_LamentConfiguration.generated.h"

UCLASS(EditInlineNew)
class UAISkill_FindCollectable_LamentConfiguration : public UAISkill_FindCollectable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter StopChainHuntGoalWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter PreemptiveFindLamentGoalWeight;
    
    UAISkill_FindCollectable_LamentConfiguration();
};

