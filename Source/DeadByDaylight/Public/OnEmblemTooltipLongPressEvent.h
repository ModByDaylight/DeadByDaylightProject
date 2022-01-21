#pragma once
#include "CoreMinimal.h"
#include "EmblemSlotData.h"
#include "UObject/NoExportTypes.h"
#include "OnEmblemTooltipLongPressEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmblemTooltipLongPressEvent, const FEmblemSlotData&, emblemSlotData, const FVector2D&, position);

