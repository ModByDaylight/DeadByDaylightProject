#pragma once
#include "CoreMinimal.h"
#include "ELanternState.h"
#include "LanternStateChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLanternStateChangeDelegate, ELanternState, lanternState, ELanternState, previousLanternState);

