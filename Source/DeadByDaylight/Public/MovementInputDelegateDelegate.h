#pragma once
#include "CoreMinimal.h"
#include "MovementInputDelegateDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementInputDelegate, ADBDPlayer*, player);

