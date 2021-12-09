#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_ShockTherapy.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_ShockTherapy : public UAISkill_InteractionTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TargetToEvadePointMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float CastShockTimeBuffer;
    
    UAISkill_InteractionTarget_ShockTherapy();
};

