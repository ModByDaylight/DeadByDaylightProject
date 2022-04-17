#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DemonModeChargeGainedAfterAttackDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDemonModeChargeGainedAfterAttackDelegate, FVector, targetLocation);

