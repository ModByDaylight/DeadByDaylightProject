#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreSelectableButtonWidget.generated.h"

class UCoreSelectableButtonWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCoreSelectableButtonWidgetOnSelectedChangedDelegate, UCoreSelectableButtonWidget*, buttonTarget, bool, isSelected);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreSelectableButtonWidgetOnSelectedAgainDelegate, UCoreSelectableButtonWidget*, buttonTarget);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSelectableButtonWidget : public UCoreButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCoreSelectableButtonWidgetOnSelectedChangedDelegate OnSelectedChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreSelectableButtonWidgetOnSelectedAgainDelegate OnSelectedAgainDelegate;
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool NewIsSelected);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectedChanged(bool NewIsSelected);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelectable() const;
    
    UCoreSelectableButtonWidget();
};

