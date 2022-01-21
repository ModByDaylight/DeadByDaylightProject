#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "UMGAtlantaPromoCodePopup.generated.h"

class UOverlay;
class UImage;
class UUMGAtlantaPromoCodeRewardItemWidget;
class UHorizontalBox;
class UEditableTextBox;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaPromoCodePopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
    UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPromoCodeInputOnPopup, const FString&, name);
    
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

