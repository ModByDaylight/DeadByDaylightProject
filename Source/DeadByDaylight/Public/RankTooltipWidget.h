#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "RankTooltipWidget.generated.h"

class UUMGPlayerRankInfo;
class UTextBlock;
class UGridPanel;

UCLASS(Abstract, EditInlineNew)
class URankTooltipWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RankInfoLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ResetInfoLabel;
    
    UPROPERTY(Export)
    UGridPanel* RankInfoSlotsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPlayerRankInfo* SurvivorRankInfoWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPlayerRankInfo* KillerRankInfoWidget;
    
public:
    URankTooltipWidget();
};

