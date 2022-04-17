#pragma once
#include "CoreMinimal.h"
#include "SecondaryActionInputDelegateDelegate.generated.h"

class ADBDPlayer;
class UInteractionDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSecondaryActionInputDelegate, ADBDPlayer*, player, UInteractionDefinition*, interaction, bool, fromCancelRequest);

