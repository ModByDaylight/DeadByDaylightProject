#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTeleport.h"
#include "AISkill_InteractionTeleportEthereal.generated.h"

class AActor;

UCLASS(Abstract, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal : public UAISkill_InteractionTeleport {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TeleportPlanInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxTeleportAlignHalfAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AbortNotWorkingTeleportDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float AbortAddRunCooldownPenaltyTime;
    
private:
    UPROPERTY(Transient)
    AActor* _onStimulusInstigator;
    
public:
    UAISkill_InteractionTeleportEthereal();
};

