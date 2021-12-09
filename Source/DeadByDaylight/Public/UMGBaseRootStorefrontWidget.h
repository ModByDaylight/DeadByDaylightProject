#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "TooltipPressedData.h"
#include "UMGBaseRootStorefrontWidget.generated.h"

class UNamedSlot;
class UPanelWidget;
class UUMGBaseButtonWidget;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGBaseRootStorefrontWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UNamedSlot* StorePageSlot;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* BackButton;
    
    UPROPERTY(Export)
    UPanelWidget* CurrencyButtonsPanel;
    
    UPROPERTY(Export)
    UTextBlock* StorefrontTitle;
    
    UFUNCTION()
    void OnPurchaseAuricCellButtonPressed();
    
    UFUNCTION()
    void OnCurrencyButtonLongPressed(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);
    
    UFUNCTION()
    void OnBackButtonPressed();
    
public:
    UUMGBaseRootStorefrontWidget();
};

