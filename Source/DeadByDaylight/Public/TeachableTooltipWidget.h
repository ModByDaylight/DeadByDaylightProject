#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "TeachableTooltipWidget.generated.h"

class UImage;
class UTextBlock;
class UUMGHtmlRichText;

UCLASS(Abstract, EditInlineNew)
class UTeachableTooltipWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* SubTitleLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HeaderSmoke;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* EffectText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* AvailabilityText;
    
public:
    UTeachableTooltipWidget();
};

