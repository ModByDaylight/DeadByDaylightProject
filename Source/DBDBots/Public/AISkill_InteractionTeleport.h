#pragma once
#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AISkill_InteractionTeleport.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleport : public UAISkill_Interaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float BlockTeleportWhenPathGoalUnderRange;
    
    UAISkill_InteractionTeleport();
};

