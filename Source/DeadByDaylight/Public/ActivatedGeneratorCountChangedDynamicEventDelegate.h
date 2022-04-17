#pragma once
#include "CoreMinimal.h"
#include "ActivatedGeneratorCountChangedDynamicEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivatedGeneratorCountChangedDynamicEvent, int32, _activatedGeneratorCount);

