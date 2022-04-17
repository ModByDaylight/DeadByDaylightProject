#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "ChargeableDefSkillCheckResponseDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FChargeableDefSkillCheckResponse, bool, Success, bool, Bonus, ADBDPlayer*, Player, bool, TriggerLoudNoise, ESkillCheckCustomType, type);

