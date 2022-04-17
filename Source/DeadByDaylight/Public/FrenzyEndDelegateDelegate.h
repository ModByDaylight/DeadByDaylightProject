#pragma once
#include "CoreMinimal.h"
#include "FrenzyEndDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrenzyEndDelegate, float, cooldownTime);

