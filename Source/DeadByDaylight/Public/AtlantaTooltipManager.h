#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaTooltipManager.generated.h"

class UUMGCloseTooltipWidget;
class UBaseTooltipWidget;

UCLASS()
class UAtlantaTooltipManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBaseTooltipWidget* _activeTooltip;
    
    UPROPERTY(Export, Transient)
    UUMGCloseTooltipWidget* _closeTooltipWidget;
    
public:
    UAtlantaTooltipManager();
private:
    UFUNCTION()
    void TryCloseActiveTooltipWithWidget();
    
public:
    UFUNCTION()
    bool TryCloseActiveTooltip();
    
};

