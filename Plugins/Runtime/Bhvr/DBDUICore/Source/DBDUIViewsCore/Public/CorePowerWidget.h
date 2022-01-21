#pragma once
#include "CoreMinimal.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "PowerViewInterface.h"
#include "CorePowerWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePowerWidget : public UCoreBaseLoadoutPartWidget, public IPowerViewInterface {
    GENERATED_BODY()
public:
    UCorePowerWidget();
    
    // Fix for true pure virtual functions not being implemented
};

