#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "UMGAtlantaPromoCodePopup.generated.h"

class UEditableTextBox;
class UHorizontalBox;
class UOverlay;
class UUMGAtlantaPromoCodeRewardItemWidget;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaPromoCodePopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPromoCodeInputOnPopup, const FString&, name);
    
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
    UUMGAtlantaPromoCodePopup();
    UFUNCTION(BlueprintCallable)
    void PromoCodeCommitted(const FText& name, TEnumAsByte<ETextCommit::Type> commitType);
    
};

