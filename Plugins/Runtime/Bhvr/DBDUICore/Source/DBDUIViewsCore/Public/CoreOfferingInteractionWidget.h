#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "OfferingInteractionViewInterface.h"
#include "CoreOfferingInteractionWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOfferingInteractionWidget : public UCoreBaseHudWidget, public IOfferingInteractionViewInterface {
    GENERATED_BODY()
public:
    UCoreOfferingInteractionWidget();
    
    // Fix for true pure virtual functions not being implemented
};

