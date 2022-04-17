#pragma once
#include "CoreMinimal.h"
#include "EK26ProjectileState.h"
#include "K26ProjectileStateDetails.h"
#include "K26ProjectileStateChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FK26ProjectileStateChangeDelegate, EK26ProjectileState, newState, FK26ProjectileStateDetails, newDetails);

