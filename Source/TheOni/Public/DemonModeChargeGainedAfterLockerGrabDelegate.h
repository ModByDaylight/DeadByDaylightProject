#pragma once
#include "CoreMinimal.h"
#include "DemonModeChargeGainedAfterLockerGrabDelegate.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDemonModeChargeGainedAfterLockerGrabDelegate, ACamperPlayer*, camperInLocker);

