#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "SkillCheckViewInterface.h"
#include "CoreSkillCheckWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSkillCheckWidget : public UCoreBaseHudWidget, public ISkillCheckViewInterface {
    GENERATED_BODY()
public:
    UCoreSkillCheckWidget();
    
    // Fix for true pure virtual functions not being implemented
};

