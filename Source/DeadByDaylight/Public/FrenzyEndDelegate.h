#pragma once
#include "CoreMinimal.h"
#include "FrenzyEndDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrenzyEndDelegate, float, cooldownTime);

