#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_StealthGhost.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_StealthGhost : public UAISkill_InteractionTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float CrouchSwapDelay;
    
    UAISkill_InteractionTarget_StealthGhost();
};

