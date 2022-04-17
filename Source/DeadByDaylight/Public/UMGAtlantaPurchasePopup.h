#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaPurchasePopup.generated.h"

class UWidgetSwitcher;
class UUMGBaseButtonWidget;
class UImage;
class UUMGPurchaseSticker;
class UTextBlock;
class UUMGPurchaseBuyButton;
class UHorizontalBox;
class UUMGPurchaseItemsInfo;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaPurchasePopup : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* LayoutSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImagePopup;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* OfferTextWithInfo;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* OfferText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TitleTextWithInfo;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* ItemsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPurchaseBuyButton* BuyButtonWithInfo;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPurchaseBuyButton* BuyButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBaseButtonWidget* CloseButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPurchaseSticker* PurchaseSticker;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGPurchaseItemsInfo> PurchaseItemsInfoWidgetClass;
    
public:
    UUMGAtlantaPurchasePopup();
protected:
    UFUNCTION()
    void HandleCloseButtonClicked();
    
    UFUNCTION()
    void HandleBuyButtonClicked();
    
};

