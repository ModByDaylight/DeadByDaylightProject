#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "RewardLayoutWidgetToGenerate.h"
#include "UMGRewardPopupLayout.generated.h"

class UHorizontalBox;
class UUMGRewardSlotTutorialPopupRewardWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGRewardPopupLayout : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* TopHorizontalBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* BottomHorizontalBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* FirstCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* SecondCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* ThirdCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* FourthCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* FifthCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* AuricCells;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* IridescentShards;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRewardSlotTutorialPopupRewardWidget* Bloodpoints;
    
    UPROPERTY(EditDefaultsOnly)
    FRewardLayoutWidgetToGenerate TopWidgetToGenerate;
    
    UPROPERTY(EditDefaultsOnly)
    FRewardLayoutWidgetToGenerate BottomWidgetToGenerate;
    
public:
    UUMGRewardPopupLayout();
};

