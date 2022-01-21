#pragma once
#include "CoreMinimal.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "OfferingViewInterface.h"
#include "CoreOfferingWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget, public IOfferingViewInterface {
    GENERATED_BODY()
public:
    UCoreOfferingWidget();
    
    // Fix for true pure virtual functions not being implemented
};

