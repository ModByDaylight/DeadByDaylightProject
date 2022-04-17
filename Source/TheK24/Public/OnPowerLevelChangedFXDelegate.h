#pragma once
#include "CoreMinimal.h"
#include "OnPowerLevelChangedFXDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerLevelChangedFX, int32, powerlevel);

