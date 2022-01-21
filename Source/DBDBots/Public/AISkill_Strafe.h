#pragma once
#include "CoreMinimal.h"
#include "AISkill.h"
#include "AITunableParameter.h"
#include "AISkill_Strafe.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Strafe : public UAISkill {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float StartMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float StopMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float StrafeBackwardRange;
    
    UPROPERTY(EditDefaultsOnly)
    float StrafeFowardRange;
    
    UPROPERTY(EditDefaultsOnly)
    float IgnoreUnderNavLinkStartRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool PauseStrafeOnAnimation;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter StrafeHoldInterval;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter StrafeHoldDeviation;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter StrafePauseInterval;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter StrafePauseDeviation;
    
    UAISkill_Strafe();
};

