#pragma once
#include "CoreMinimal.h"
#include "OnCamperTriggeredDreamTrap.generated.h"

class ADBDPlayer;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCamperTriggeredDreamTrap, ADBDPlayer*, camper, AActor*, triggeredDreamTrap);

