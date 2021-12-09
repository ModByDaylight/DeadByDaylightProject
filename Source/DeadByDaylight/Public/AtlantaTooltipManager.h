#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaTooltipManager.generated.h"

class UBaseTooltipWidget;
class UUMGCloseTooltipWidget;

UCLASS()
class UAtlantaTooltipManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBaseTooltipWidget* _activeTooltip;
    
    UPROPERTY(Export, Transient)
    UUMGCloseTooltipWidget* _closeTooltipWidget;
    
    UFUNCTION()
    void TryCloseActiveTooltipWithWidget();
    
public:
    UFUNCTION()
    bool TryCloseActiveTooltip();
    
    UAtlantaTooltipManager();
};

