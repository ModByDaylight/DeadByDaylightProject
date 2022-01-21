#pragma once
#include "CoreMinimal.h"
#include "EAttackType.h"
#include "DamageTargetDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageTargetDelegate, ADBDPlayer*, source, ADBDPlayer*, target, EAttackType, attackType, bool, didDamage);

