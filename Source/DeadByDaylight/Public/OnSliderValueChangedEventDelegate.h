#pragma once
#include "CoreMinimal.h"
#include "OnSliderValueChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSliderValueChangedEvent, int32, sliderValue);

