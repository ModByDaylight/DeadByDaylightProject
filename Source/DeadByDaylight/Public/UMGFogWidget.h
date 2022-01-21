#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"
#include "UMGFogWidget.generated.h"

class UUMGBankAndPlayerInfoWidget;

UCLASS(EditInlineNew)
class UUMGFogWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;
    
    UUMGFogWidget();
protected:
    UFUNCTION()
    void OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData);
    
    UFUNCTION()
    void OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData);
    
    UFUNCTION()
    void OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnSettingButtonClick();
    
};

