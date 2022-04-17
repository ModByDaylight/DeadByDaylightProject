#pragma once
#include "CoreMinimal.h"
#include "TallyItemChangedData.h"
#include "UMGTallyListElementWidget.h"
#include "EDBDScoreCategory.h"
#include "Components/SlateWrapperTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScoreCategoryUIExtraData.h"
#include "UMGTallyBloodpointsWidget.generated.h"

class UHorizontalBox;

UCLASS(EditInlineNew)
class UUMGTallyBloodpointsWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility _itemBoxVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText _labelTotalScore;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText _labelItemTitle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText _labelItemAddOnTitle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FLinearColor _labelItemTitleColor;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* BoxScoreCategory;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<EDBDScoreCategory, FScoreCategoryUIExtraData> _scoreCategoryExtraDataMap;
    
public:
    UUMGTallyBloodpointsWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTallyTotalBloodpoints(int32 totalValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTallyRewardWidget(const FString& rewardName, int32 existReward, int32 addReward);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTallyItemWidget(const FTallyItemChangedData& data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTallyItemWidget(bool isShow);
    
};

