#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGAtlantaRankUpPopup.generated.h"

class UHorizontalBox;
class UUMGTallyRankBanner;
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
    
public:
    UUMGAtlantaRankUpPopup();
private:
    UFUNCTION()
    void PlayRankUpBannerAnimation();
    
};

