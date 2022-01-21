#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "Layout/Margin.h"
#include "TallyScorePipsData.h"
#include "UMGTallyRankWidget.generated.h"

class UUMGTallyRankBanner;
class UHorizontalBox;
class UUMGTallyEmblemWidget;
class UTextBlock;
class UUMGTallyProgressBar;

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
    UUMGTallyRankWidget();
    UFUNCTION(BlueprintPure)
    FTallyScorePipsData GetScoreData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUMGTallyEmblemWidget*> GetEmblems() const;
    
};

