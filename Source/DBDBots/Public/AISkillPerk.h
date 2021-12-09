#pragma once
#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AISkillPerk.generated.h"

class UAISkill;

USTRUCT(BlueprintType)
struct FAISkillPerk {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FDataTableDropdown PerkID;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAISkill* Skill;
    
    DBDBOTS_API FAISkillPerk();
};

