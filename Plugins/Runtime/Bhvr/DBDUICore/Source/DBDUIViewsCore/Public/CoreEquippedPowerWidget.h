#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "EquippedPowerViewInterface.h"
#include "CoreEquippedPowerWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEquippedPowerWidget : public UCoreBaseHudWidget, public IEquippedPowerViewInterface {
    GENERATED_BODY()
public:
    UCoreEquippedPowerWidget();
    
    // Fix for true pure virtual functions not being implemented
};

