#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "MatchResultViewInterface.h"
#include "CoreMatchResultWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMatchResultWidget : public UCoreBaseHudWidget, public IMatchResultViewInterface {
    GENERATED_BODY()
public:
    UCoreMatchResultWidget();
    
    // Fix for true pure virtual functions not being implemented
};

