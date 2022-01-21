#pragma once
#include "CoreMinimal.h"
#include "OnCustomizationCategoryButtonPressedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomizationCategoryButtonPressedEvent, int32, categoryIndex);

