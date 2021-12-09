#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGAtlantaRankUpPopup.generated.h"

class UUMGTallyRankBanner;
class UHorizontalBox;
class UCanvasPanel;
class UUMGRewardWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaRankUpPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankBanner* RankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* RewardsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* RewardsSection;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGRewardWidget> RewardWidgetClass;
    
private:
    UFUNCTION()
    void PlayRankUpBannerAnimation();
    
public:
    UUMGAtlantaRankUpPopup();
};

