#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TooltipPressedData.generated.h"

USTRUCT(BlueprintType)
struct FTooltipPressedData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector2D touchPosition;
    
    DEADBYDAYLIGHT_API FTooltipPressedData();
};

