#pragma once
#include "CoreMinimal.h"
#include "ChaseEndDelegateDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChaseEndDelegate, ADBDPlayer*, player, float, chaseTime);

