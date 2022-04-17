#pragma once
#include "CoreMinimal.h"
#include "ObsessionChangedDynamicDelegateDelegate.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObsessionChangedDynamicDelegate, ACamperPlayer*, newObsession, ACamperPlayer*, previousObsession);

