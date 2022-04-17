#pragma once
#include "CoreMinimal.h"
#include "FirecrackerEffectData.h"
#include "OnFirecrackerInRangeEndEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirecrackerInRangeEndEvent, const FFirecrackerEffectData&, effectData);

