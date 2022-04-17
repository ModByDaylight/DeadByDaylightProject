#pragma once
#include "CoreMinimal.h"
#include "ELanternState.h"
#include "LanternStateChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLanternStateChangeDelegate, ELanternState, lanternState, ELanternState, previousLanternState);

