#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "AtlantaCustomizationTooltipWidget.generated.h"

class UUMGCustomizationTooltipContentWidget;
class UImage;
class UUMGCustomizationTooltipHeaderWidget;

UCLASS(Abstract, EditInlineNew)
class UAtlantaCustomizationTooltipWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SmokeImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationTooltipHeaderWidget* Header;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationTooltipContentWidget* Content;
    
public:
    UAtlantaCustomizationTooltipWidget();
};

