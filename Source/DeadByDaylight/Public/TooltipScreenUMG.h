#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "TooltipScreenUMG.generated.h"

class UBaseTooltipWidget;

UCLASS()
class UTooltipScreenUMG : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBaseTooltipWidget* _tooltipWidget;
    
    UFUNCTION()
    void OnCloseTriggered();
    
public:
    UTooltipScreenUMG();
};

