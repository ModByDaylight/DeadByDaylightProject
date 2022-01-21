#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECustomizationCategory.h"
#include "UMGCustomizationTooltipHeaderWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationTooltipHeaderWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CollectionName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CategoryAndRarityText;
    
public:
    UUMGCustomizationTooltipHeaderWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetOutfitComposition(const bool isUnbreakable, const TArray<ECustomizationCategory>& composition);
    
};

