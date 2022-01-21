#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "RewardItemData.h"
#include "UMGRewardWidget.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGRewardWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CheckIcon;
    
public:
    UUMGRewardWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FRewardItemData& RewardData);
    
};

