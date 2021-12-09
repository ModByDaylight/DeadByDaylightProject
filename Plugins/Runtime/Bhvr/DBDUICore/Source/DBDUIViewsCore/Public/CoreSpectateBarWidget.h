#pragma once
#include "CoreMinimal.h"
#include "SpectateBarViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreSpectateBarWidget.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreSpectateBarWidgetLeaveButtonClickDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreSpectateBarWidgetLeftArrowClickDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreSpectateBarWidgetRightArrowClickDelegate);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSpectateBarWidget : public UCoreBaseHudWidget, public ISpectateBarViewInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCoreSpectateBarWidgetLeaveButtonClickDelegate _leaveButtonClickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCoreSpectateBarWidgetLeftArrowClickDelegate _leftArrowClickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCoreSpectateBarWidgetRightArrowClickDelegate _rightArrowClickDelegate;
    
public:
    UCoreSpectateBarWidget();
};

