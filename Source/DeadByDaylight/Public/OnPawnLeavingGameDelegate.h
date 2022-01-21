#pragma once
#include "CoreMinimal.h"
#include "OnPawnLeavingGameDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawnLeavingGameDelegate, ADBDPlayer*, leavingPlayer);

