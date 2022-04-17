#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGMonthlyPassRewardItemWidget.generated.h"

class UTextBlock;
class UImage;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMonthlyPassRewardItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemAmount;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CheckIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemFrame;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemRarityBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ItemPaintPanel;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ActiveItemFrameColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonActiveItemFrameColor;
    
public:
    UUMGMonthlyPassRewardItemWidget();
};

