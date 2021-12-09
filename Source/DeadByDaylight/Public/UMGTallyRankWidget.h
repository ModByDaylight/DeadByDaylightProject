#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "TallyScorePipsData.h"
#include "Layout/Margin.h"
#include "UMGTallyRankWidget.generated.h"

class UUMGTallyEmblemWidget;
class UTextBlock;
class UHorizontalBox;
class UUMGTallyProgressBar;
class UUMGTallyRankBanner;

UCLASS(EditInlineNew)
class UUMGTallyRankWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FMargin _emblemsPadding;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyEmblemWidget> EmblemWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* EmblemsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankBanner* RankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RankProgressLabel;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UUMGTallyEmblemWidget*> _emblems;
    
    UPROPERTY(Transient)
    FTallyScorePipsData _scoreData;
    
public:
    UFUNCTION(BlueprintPure)
    FTallyScorePipsData GetScoreData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUMGTallyEmblemWidget*> GetEmblems() const;
    
    UUMGTallyRankWidget();
};

