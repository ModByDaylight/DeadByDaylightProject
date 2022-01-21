#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreButtonSelector.h"
#include "Layout/Margin.h"
#include "TabWidgetData.h"
#include "CoreTabContainerWidget.generated.h"

class UCoreTabWidget;
class UGridPanel;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTabContainerWidget : public UCoreButtonSelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    bool AlignHorizontally;
    
    UPROPERTY(EditInstanceOnly, NoClear)
    FMargin TabPadding;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreTabWidget> CoreTabClass;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGridPanel* TabContainer;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    bool UseControllerTabSwitching;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    bool CanLoop;
    
public:
    UCoreTabContainerWidget();
    UFUNCTION(BlueprintCallable)
    void RemoveTabs();
    
    UFUNCTION(BlueprintCallable)
    void Init(const TArray<FTabWidgetData>& tabsData);
    
};

