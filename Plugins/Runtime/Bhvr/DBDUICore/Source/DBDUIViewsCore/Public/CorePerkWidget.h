#pragma once
#include "CoreMinimal.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "PerkViewInterface.h"
#include "CorePerkWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePerkWidget : public UCoreBaseLoadoutPartWidget, public IPerkViewInterface {
    GENERATED_BODY()
public:
    UCorePerkWidget();
};

