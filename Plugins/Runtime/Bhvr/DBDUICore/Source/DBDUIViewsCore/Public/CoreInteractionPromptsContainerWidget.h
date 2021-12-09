#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "InteractionPromptsContainerViewInterface.h"
#include "TutorialHighlightViewInterface.h"
#include "Layout/Margin.h"
#include "CoreInteractionPromptsContainerWidget.generated.h"

class UDBDWrapBox;
class UCoreInteractionPromptWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget, public IInteractionPromptsContainerViewInterface, public ITutorialHighlightViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDWrapBox* CenterContainerBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDWrapBox* ContainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UCoreInteractionPromptWidget> InteractionPromptWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxDisplayedPrompts;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxDisplayedCenterPrompts;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMargin SlotMargin;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UCoreInteractionPromptWidget*> _promptWidgetPool;
    
    UPROPERTY(Export, Transient)
    TArray<UCoreInteractionPromptWidget*> _centerPromptWidgetPool;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UCoreInteractionPromptWidget*> _displayedPromptsMap;
    
public:
    UCoreInteractionPromptsContainerWidget();
};

