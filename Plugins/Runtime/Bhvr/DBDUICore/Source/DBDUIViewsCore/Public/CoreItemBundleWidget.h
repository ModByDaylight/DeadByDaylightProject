#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ItemBundleViewInterface.h"
#include "CoreItemBundleWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreItemBundleWidget : public UCoreBaseUserWidget, public IItemBundleViewInterface {
    GENERATED_BODY()
public:
    UCoreItemBundleWidget();
    
    // Fix for true pure virtual functions not being implemented
};

