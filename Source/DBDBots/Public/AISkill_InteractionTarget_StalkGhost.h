#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Stalk.h"
#include "AISkill_InteractionTarget_StalkGhost.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_StalkGhost : public UAISkill_InteractionTarget_Stalk {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float CautiousModeUnderTargetRange;
    
    UPROPERTY(EditDefaultsOnly)
    float CautiousModeSpeedFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float BackFromCautiousDelay;
    
    UAISkill_InteractionTarget_StalkGhost();
};

