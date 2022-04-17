#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "GameflowEventDynamicDelegateDelegate.generated.h"

class ADBDPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameflowEventDynamicDelegate, EDBDScoreTypes, playerGameplayEventType, float, amount, const ADBDPlayerState*, effector);

