#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "OnDeactivateSkillCheckDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnDeactivateSkillCheck, bool, HadInput, bool, Success, bool, Bonus, ESkillCheckCustomType, type);

