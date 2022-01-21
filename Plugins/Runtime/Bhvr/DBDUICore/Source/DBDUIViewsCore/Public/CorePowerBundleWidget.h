#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "PowerBundleViewInterface.h"
#include "CorePowerBundleWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePowerBundleWidget : public UCoreBaseUserWidget, public IPowerBundleViewInterface {
    GENERATED_BODY()
public:
    UCorePowerBundleWidget();
    
    // Fix for true pure virtual functions not being implemented
};

