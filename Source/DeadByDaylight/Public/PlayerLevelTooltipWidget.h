#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "PlayerLevelTooltipWidget.generated.h"

class UUMGTooltipContentPlayerLevelWidget;

UCLASS(Abstract, EditInlineNew)
class UPlayerLevelTooltipWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTooltipContentPlayerLevelWidget* PlayerLevelContent;
    
public:
    UPlayerLevelTooltipWidget();
};

