#pragma once
#include "CoreMinimal.h"
#include "OnPowerLevelChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerLevelChanged, int32, powerlevel);

