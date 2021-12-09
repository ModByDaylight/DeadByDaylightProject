#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTeleportEthereal.h"
#include "AISkill_InteractionTeleportEthereal_Blink.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal_Blink : public UAISkill_InteractionTeleportEthereal {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float StartBlinkAtWarpLocationRange;
    
    UPROPERTY(EditDefaultsOnly)
    float ValidateBlinkWarpRange;
    
    UPROPERTY(EditDefaultsOnly)
    float BlinkAboveSavedPathLength;
    
    UPROPERTY(EditDefaultsOnly)
    float BlinkIfTargetWillBeInRange;
    
    UAISkill_InteractionTeleportEthereal_Blink();
};

