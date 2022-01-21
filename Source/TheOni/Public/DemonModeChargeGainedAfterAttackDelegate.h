#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DemonModeChargeGainedAfterAttackDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDemonModeChargeGainedAfterAttackDelegate, FVector, targetLocation);

