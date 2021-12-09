#pragma once
#include "CoreMinimal.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "AddonViewInterface.h"
#include "CoreAddonWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAddonWidget : public UCoreBaseLoadoutPartWidget, public IAddonViewInterface {
    GENERATED_BODY()
public:
    UCoreAddonWidget();
};

