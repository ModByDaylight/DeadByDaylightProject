#pragma once
#include "CoreMinimal.h"
#include "SecondaryActionInputDelegate.generated.h"

class ADBDPlayer;
class UInteractionDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSecondaryActionInputDelegate, ADBDPlayer*, player, UInteractionDefinition*, interaction, bool, fromCancelRequest);

