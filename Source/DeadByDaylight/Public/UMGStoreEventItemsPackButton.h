#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStoreEventItemsPackButton.generated.h"

class UUniformGridPanel;
class UUMGBaseButtonWidget;
class UImage;
class UTextBlock;
class UUMGAtlStorePriceWidget;
class UCanvasPanel;
class UUMGAtlEndDateTimerWidget;
class UUMGAtlEventItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGStoreEventItemsPackButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UImage* ImageIcon;
    
    UPROPERTY(Export)
    UTextBlock* TitleText;
    
    UPROPERTY(Export)
    UTextBlock* CurrencyAmountText;
    
    UPROPERTY(Export)
    UTextBlock* CurrencyNameText;
    
    UPROPERTY(Export)
    UUniformGridPanel* UniformGridPanel;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* BuyButton;
    
    UPROPERTY(Export)
    UUMGAtlStorePriceWidget* StorePriceWidget;
    
    UPROPERTY(Export)
    UUMGAtlEndDateTimerWidget* EndDateTimerWidget;
    
    UPROPERTY(Export)
    UCanvasPanel* SelectedImageBox;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGAtlEventItemWidget> EventItemWidgetClassPtr;
    
    UPROPERTY(EditDefaultsOnly)
    int32 nbColumns;
    
public:
    UUMGStoreEventItemsPackButton();
private:
    UFUNCTION()
    void ShowSelectedCanvas();
    
    UFUNCTION()
    void HideSelectedCanvas();
    
    UFUNCTION()
    void HandleEndDateTimerReached();
    
    UFUNCTION()
    void HandleButtonClicked();
    
};

