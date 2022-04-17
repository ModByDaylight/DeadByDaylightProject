#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyDelegate_PickupDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimNotifyDelegate_Pickup, ADBDPlayer*, player);

