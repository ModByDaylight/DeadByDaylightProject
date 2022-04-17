#pragma once
#include "CoreMinimal.h"
#include "OnMaxAmmoSetEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxAmmoSetEvent, const int32, maxAmmo);

