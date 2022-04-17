#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGRewardSlotTutorialPopupRewardWidget.generated.h"

class UTextBlock;
class UImage;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGRewardSlotTutorialPopupRewardWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RewardText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* RewardPicture;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidget* UnlockedPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidget* MissedRewardPanel;
    
    UPROPERTY(EditDefaultsOnly)
    float RewardUnlockedTextOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float RewardToBeMissedTextOpacity;
    
public:
    UUMGRewardSlotTutorialPopupRewardWidget();
};

