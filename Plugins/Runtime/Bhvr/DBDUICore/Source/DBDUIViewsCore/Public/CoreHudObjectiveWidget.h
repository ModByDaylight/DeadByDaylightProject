#pragma once
#include "CoreMinimal.h"
#include "HudObjectiveViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "TutorialHighlightViewInterface.h"
#include "CoreHudObjectiveWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudObjectiveWidget : public UCoreBaseHudWidget, public IHudObjectiveViewInterface, public ITutorialHighlightViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* SpecialSpacer;
    
public:
    UCoreHudObjectiveWidget();
};

