#pragma once
#include "CoreMinimal.h"
#include "ChaseStartDelegateDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChaseStartDelegate, ADBDPlayer*, player);

