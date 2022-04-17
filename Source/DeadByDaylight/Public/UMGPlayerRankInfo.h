#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerRole.h"
#include "UMGPlayerRankInfo.generated.h"

class UCanvasPanel;
class UUMGTallyPipsContainer;
class UUMGTallyRankFrame;
class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGPlayerRankInfo : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyPipsContainer* PipsContainerWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankFrame* RankFrameWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Background;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TitleLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RankLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PipLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HighlightContainer;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _survivorColorBackground;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _killerColorBackground;
    
    UPROPERTY(EditDefaultsOnly)
    float _disableOpacity;
    
public:
    UUMGPlayerRankInfo();
    UFUNCTION(BlueprintCallable)
    void SetData(int32 rank, int32 pipsRequiredForNextRank, int32 filledPips, FText NewTitleLabel, FText NewPipLabel, EPlayerRole playerRole, bool IsHighlight);
    
};

