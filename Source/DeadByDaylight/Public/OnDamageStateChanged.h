#pragma once
#include "CoreMinimal.h"
#include "ECamperDamageState.h"
#include "OnDamageStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageStateChanged, ECamperDamageState, oldDamageState, ECamperDamageState, newDamageState);

