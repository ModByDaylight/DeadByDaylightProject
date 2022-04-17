#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "PerksContainerViewInterface.h"
#include "CorePerksContainerWidget.generated.h"

class UCorePerkWidget;
class UPerkViewInterface;
class IPerkViewInterface;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePerksContainerWidget : public UCoreBaseHudWidget, public IPerksContainerViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UCorePerkWidget*> PerkWidgets;
    
private:
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPerkViewInterface>> _perkViewInterfaces;
    
public:
    UCorePerksContainerWidget();
    
    // Fix for true pure virtual functions not being implemented
};

