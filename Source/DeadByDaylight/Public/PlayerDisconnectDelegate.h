#pragma once
#include "CoreMinimal.h"
#include "PlayerDisconnectDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDisconnectDelegate, ADBDPlayer*, player);

