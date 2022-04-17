#pragma once
#include "CoreMinimal.h"
#include "TeachableData.h"
#include "UObject/NoExportTypes.h"
#include "OnTeachableTooltipLongPressEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeachableTooltipLongPressEvent, const FTeachableData&, teachableData, const FVector2D&, position);

