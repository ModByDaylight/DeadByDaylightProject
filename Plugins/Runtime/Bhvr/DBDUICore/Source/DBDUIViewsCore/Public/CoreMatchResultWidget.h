#pragma once
#include "CoreMinimal.h"
#include "MatchResultViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreMatchResultWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMatchResultWidget : public UCoreBaseHudWidget, public IMatchResultViewInterface {
    GENERATED_BODY()
public:
    UCoreMatchResultWidget();
};

