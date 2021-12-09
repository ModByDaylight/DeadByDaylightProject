#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "UMGAtlantaPromoCodePopup.generated.h"

class UOverlay;
class UHorizontalBox;
class UImage;
class UUMGAtlantaPromoCodeRewardItemWidget;
class UEditableTextBox;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaPromoCodePopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UOverlay* RewardPanel;
    
    UPROPERTY(Export)
    UHorizontalBox* RewardWidgetContainer;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUMGAtlantaPromoCodeRewardItemWidget> RewardItemWidgetClass;
    
    UPROPERTY(EditAnywhere)
    int32 RewardItemWidgetMax;
    
    UPROPERTY(EditAnywhere)
    FMargin RewardItemWidgetPadding;
    
    UPROPERTY(EditAnywhere)
    float RewardItemWidgetRevealDelay;
    
    UPROPERTY(Export)
    UOverlay* CodePanel;
    
    UPROPERTY(Export)
    UEditableTextBox* PromoCodeInputTextBox;
    
    UPROPERTY(Export)
    UImage* InvalidIcon;
    
public:
    UFUNCTION(BlueprintCallable)
    void PromoCodeCommitted(const FText& name, TEnumAsByte<ETextCommit::Type> commitType);
    
    UUMGAtlantaPromoCodePopup();
};

