#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaPromoCodeRewardItemWidget.generated.h"

class UWidgetAnimation;
class UPanelWidget;
class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaPromoCodeRewardItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* CurrencyItem;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CurrencyName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CurrencyAmount;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemRarityTint;
    
    UPROPERTY()
    UWidgetAnimation* RevealAnimationSmall;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* CustomizationItem;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CustomizationIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CustomizationName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CustomizationRarityTint;
    
    UPROPERTY()
    UWidgetAnimation* RevealAnimationLarge;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* CharacterPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CharacterPortrait;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CharacterName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* TicketPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TicketRarityTint;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TicketIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TicketName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TicketAmount;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* OfferingPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* OfferingRarityTint;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* OfferingIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* OfferingName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* OfferingAmount;
    
public:
    UUMGAtlantaPromoCodeRewardItemWidget();
};

