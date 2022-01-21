#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TemplateViewInterface.h"
#include "CoreTemplateWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTemplateWidget : public UUserWidget, public ITemplateViewInterface {
    GENERATED_BODY()
public:
    UCoreTemplateWidget();
    
    // Fix for true pure virtual functions not being implemented
};

