#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "TutorialMysteryNoteViewInterface.h"
#include "CoreTutorialMysteryNoteWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget, public ITutorialMysteryNoteViewInterface {
    GENERATED_BODY()
public:
    UCoreTutorialMysteryNoteWidget();
};

