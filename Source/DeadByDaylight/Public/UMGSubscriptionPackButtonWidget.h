#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGSubscriptionPackButtonWidget.generated.h"

class USubscriptionRewardDataAsset;
class UUniformGridPanel;
class UImage;
class UCanvasPanel;
class UButton;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSubscriptionPackButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    USubscriptionRewardDataAsset* WidgetPerRewardType;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ButtonPressedVFX;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PricePanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TitleIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Price;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* RenewalDatePanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RenewalDateText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUniformGridPanel* PurchaseRewardsGrid;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUniformGridPanel* DailyRewardsGrid;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PortraitBorder;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* InfoButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ActiveBackgroundImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* NonActiveBackgroundImage;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ActiveTextColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonActiveTextColor;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor TextColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ActiveSmokeBackgroundTint;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonActiveSmokeBackgroundTint;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PurchaseRewardsSmokeBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* DailyRewardsSmokeBackground;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ActiveTitleBackgroundTint;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonActiveTitleBackgroundTint;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TitleBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ActiveFrame;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* NonActiveFrame;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInfoButtonClicked();
    
public:
    UUMGSubscriptionPackButtonWidget();
};

