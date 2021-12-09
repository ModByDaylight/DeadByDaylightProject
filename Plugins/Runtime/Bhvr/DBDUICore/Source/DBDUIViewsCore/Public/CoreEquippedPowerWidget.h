#pragma once
#include "CoreMinimal.h"
#include "EquippedPowerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreEquippedPowerWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEquippedPowerWidget : public UCoreBaseHudWidget, public IEquippedPowerViewInterface {
    GENERATED_BODY()
public:
    UCoreEquippedPowerWidget();
};

