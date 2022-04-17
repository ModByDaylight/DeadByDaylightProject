#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"
#include "UMGBaseRootStorefrontWidget.generated.h"

class UNamedSlot;
class UUMGBaseButtonWidget;
class UPanelWidget;
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
    
public:
    UUMGBaseRootStorefrontWidget();
protected:
    UFUNCTION()
    void OnPurchaseAuricCellButtonPressed();
    
    UFUNCTION()
    void OnCurrencyButtonLongPressed(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);
    
    UFUNCTION()
    void OnBackButtonPressed();
    
};

