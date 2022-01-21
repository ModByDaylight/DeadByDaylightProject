#pragma once
#include "CoreMinimal.h"
#include "ObsessionChangedDynamicDelegate.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObsessionChangedDynamicDelegate, ACamperPlayer*, newObsession, ACamperPlayer*, previousObsession);

