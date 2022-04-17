#pragma once
#include "CoreMinimal.h"
#include "ECamperDamageState.h"
#include "OnDamageStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageStateChanged, ECamperDamageState, oldDamageState, ECamperDamageState, newDamageState);

