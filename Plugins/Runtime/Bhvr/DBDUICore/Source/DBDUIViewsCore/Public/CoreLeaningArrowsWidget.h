#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "LeaningArrowsViewInterface.h"
#include "CoreLeaningArrowsWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLeaningArrowsWidget : public UCoreBaseHudWidget, public ILeaningArrowsViewInterface {
    GENERATED_BODY()
public:
    UCoreLeaningArrowsWidget();
    
    // Fix for true pure virtual functions not being implemented
};

