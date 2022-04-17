#pragma once
#include "CoreMinimal.h"
#include "OnIsDamagedChangedEventDelegate.generated.h"

class AGenerator;
class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsDamagedChangedEvent, AGenerator*, generator, ADBDPlayer*, player);

