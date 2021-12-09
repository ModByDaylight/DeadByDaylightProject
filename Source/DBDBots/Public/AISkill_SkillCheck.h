#pragma once
#include "CoreMinimal.h"
#include "AISkill.h"
#include "AIRoll.h"
#include "AISkill_SkillCheck.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_SkillCheck : public UAISkill {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIRoll RegularZoneRoll;
    
    UPROPERTY(EditDefaultsOnly)
    FAIRoll BonusZoneRoll;
    
    UAISkill_SkillCheck();
};

