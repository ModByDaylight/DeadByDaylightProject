#pragma once
#include "CoreMinimal.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "ItemViewInterface.h"
#include "CoreItemWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreItemWidget : public UCoreBaseLoadoutPartWidget, public IItemViewInterface {
    GENERATED_BODY()
public:
    UCoreItemWidget();
    
    // Fix for true pure virtual functions not being implemented
};

