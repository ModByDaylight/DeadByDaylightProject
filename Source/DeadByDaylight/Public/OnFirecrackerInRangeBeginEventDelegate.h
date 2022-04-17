#pragma once
#include "CoreMinimal.h"
#include "FirecrackerEffectData.h"
#include "OnFirecrackerInRangeBeginEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirecrackerInRangeBeginEvent, const FFirecrackerEffectData&, effectData);

