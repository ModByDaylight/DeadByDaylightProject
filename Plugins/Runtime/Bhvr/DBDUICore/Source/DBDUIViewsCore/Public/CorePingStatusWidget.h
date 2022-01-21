#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "PingStatusViewInterface.h"
#include "CorePingStatusWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePingStatusWidget : public UCoreBaseHudWidget, public IPingStatusViewInterface {
    GENERATED_BODY()
public:
    UCorePingStatusWidget();
    
    // Fix for true pure virtual functions not being implemented
};

