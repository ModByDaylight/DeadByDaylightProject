#pragma once
#include "CoreMinimal.h"
#include "OnSliderFloatValueChangedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSliderFloatValueChangedEvent, float, sliderValue);

