#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "ChargeableSkillCheckResponseDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FChargeableSkillCheckResponse, bool, Success, bool, Bonus, ADBDPlayer*, Player, bool, TriggerLoudNoise, bool, hadInput, ESkillCheckCustomType, type, float, ChargeChange);

