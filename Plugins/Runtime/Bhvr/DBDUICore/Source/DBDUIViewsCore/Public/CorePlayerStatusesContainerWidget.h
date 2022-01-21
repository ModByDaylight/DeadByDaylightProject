#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "PlayerStatusesContainerViewInterface.h"
#include "TutorialHighlightViewInterface.h"
#include "CorePlayerStatusesContainerWidget.generated.h"

class UPlayerStatusViewInterface;
class IPlayerStatusViewInterface;
class UCorePlayerStatusWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget, public IPlayerStatusesContainerViewInterface, public ITutorialHighlightViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UCorePlayerStatusWidget*> PlayerStatusWidgets;
    
private:
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusViewInterfaces;
    
public:
    UCorePlayerStatusesContainerWidget();
    
    // Fix for true pure virtual functions not being implemented
};

