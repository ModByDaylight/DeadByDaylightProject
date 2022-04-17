#pragma once
#include "CoreMinimal.h"
#include "OnPickedUpEventDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickedUpEvent, ADBDPlayer*, picker);

