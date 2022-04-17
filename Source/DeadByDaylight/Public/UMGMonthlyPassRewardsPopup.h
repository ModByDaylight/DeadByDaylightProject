#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Layout/Margin.h"
#include "UMGMonthlyPassRewardsPopup.generated.h"

class UHorizontalBox;
class UTextBlock;
class UUMGRewardWidget;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGMonthlyPassRewardsPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* SubscriptionLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TitleLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SubscriptionIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RenewalDateLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* RewardsContainer;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGRewardWidget> RewardWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FMargin _rewardsPadding;
    
public:
    UUMGMonthlyPassRewardsPopup();
};

