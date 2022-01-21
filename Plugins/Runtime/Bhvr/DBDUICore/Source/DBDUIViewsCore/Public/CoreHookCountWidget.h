#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "HookCountViewInterface.h"
#include "CoreHookCountWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHookCountWidget : public UCoreBaseHudWidget, public IHookCountViewInterface {
    GENERATED_BODY()
public:
    UCoreHookCountWidget();
    
    // Fix for true pure virtual functions not being implemented
};

