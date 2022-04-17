#pragma once
#include "CoreMinimal.h"
#include "PlayerDisconnectDelegateDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDisconnectDelegate, ADBDPlayer*, player);

