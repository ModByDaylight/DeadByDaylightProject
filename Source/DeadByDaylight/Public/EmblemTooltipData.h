#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "EmblemSlotData.h"
#include "EmblemTooltipData.generated.h"

USTRUCT()
struct FEmblemTooltipData : public FBaseTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FEmblemSlotData EmblemSlotData;
    
    DEADBYDAYLIGHT_API FEmblemTooltipData();
};

