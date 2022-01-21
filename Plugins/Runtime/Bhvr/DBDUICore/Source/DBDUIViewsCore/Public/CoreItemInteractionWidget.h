#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "ItemInteractionViewInterface.h"
#include "CoreItemInteractionWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreItemInteractionWidget : public UCoreBaseHudWidget, public IItemInteractionViewInterface {
    GENERATED_BODY()
public:
    UCoreItemInteractionWidget();
    
    // Fix for true pure virtual functions not being implemented
};

