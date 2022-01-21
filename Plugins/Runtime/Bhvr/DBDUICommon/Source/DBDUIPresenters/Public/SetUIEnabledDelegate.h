#pragma once
#include "CoreMinimal.h"
#include "SetUIEnabledDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetUIEnabledDelegate, bool, enabled);

