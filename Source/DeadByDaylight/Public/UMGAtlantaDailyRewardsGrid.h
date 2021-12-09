#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaDailyRewardsGrid.generated.h"

class UUMGDailyRewardWidget;
class UCanvasPanel;
class UUniformGridPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaDailyRewardsGrid : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_7;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_9;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_13;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_7;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_9;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_13;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUniformGridPanel* DailyRewardWidgetsGridPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* LastDailyRewardWidgetPanel;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfItems;
    
    UFUNCTION()
    void StartRewardsIntroRewardSequence();
    
public:
    UFUNCTION()
    void StartIntroSequence();
    
protected:
    UFUNCTION()
    void PlayNextRewardIntroAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeLayouts_BP();
    
public:
    UUMGAtlantaDailyRewardsGrid();
};

