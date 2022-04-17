#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckType.generated.h"

UENUM()
enum class ESkillCheckType : uint8 {
    NONE,
    GOOD_SKILL_CHECK,
    GREAT_SKILL_CHECK,
    BOTH,
};

