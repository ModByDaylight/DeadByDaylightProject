#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseTooltipData.generated.h"

class UBaseTooltipWidget;

USTRUCT()
struct FBaseTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString Title;
    
    UPROPERTY(Transient)
    FString Description;
    
    UPROPERTY(Transient)
    FVector2D TouchPosition;
    
    UPROPERTY(Transient)
    TSoftClassPtr<UBaseTooltipWidget> LeftTooltipWidgetAsset;
    
    UPROPERTY(Transient)
    TSoftClassPtr<UBaseTooltipWidget> RightTooltipWidgetAsset;
    
    DEADBYDAYLIGHT_API FBaseTooltipData();
};

