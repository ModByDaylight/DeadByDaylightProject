#pragma once
#include "CoreMinimal.h"
#include "RewardLayoutWidgetToGenerate.generated.h"

class UUMGRewardSlotTutorialPopupRewardWidget;
class UUserWidget;

USTRUCT(BlueprintType)
struct FRewardLayoutWidgetToGenerate {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGRewardSlotTutorialPopupRewardWidget> CharacterRewardWidget;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGRewardSlotTutorialPopupRewardWidget> CurrencyRewardWidget;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUserWidget> SpacerWidget;
    
    DEADBYDAYLIGHT_API FRewardLayoutWidgetToGenerate();
};

