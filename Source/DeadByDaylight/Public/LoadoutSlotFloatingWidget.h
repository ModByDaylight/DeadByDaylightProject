#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "LoadoutSlotFloatingWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class ULoadoutSlotFloatingWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Message;
    
public:
    ULoadoutSlotFloatingWidget();
};

