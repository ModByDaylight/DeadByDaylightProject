#pragma once
#include "CoreMinimal.h"
#include "OnMaxAmmoSetEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxAmmoSetEvent, const int32, maxAmmo);

