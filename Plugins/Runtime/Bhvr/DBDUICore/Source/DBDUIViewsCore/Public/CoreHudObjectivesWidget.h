#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "HudObjectivesViewInterface.h"
#include "TutorialHighlightViewInterface.h"
#include "CoreHudObjectivesWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudObjectivesWidget : public UCoreBaseHudWidget, public IHudObjectivesViewInterface, public ITutorialHighlightViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* SpecialSpacer;
    
public:
    UCoreHudObjectivesWidget();
};

