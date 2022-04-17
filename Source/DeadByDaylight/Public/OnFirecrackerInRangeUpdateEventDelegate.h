#pragma once
#include "CoreMinimal.h"
#include "FirecrackerEffectData.h"
#include "OnFirecrackerInRangeUpdateEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFirecrackerInRangeUpdateEvent, float, deltaTime, const FFirecrackerEffectData&, effectData);

