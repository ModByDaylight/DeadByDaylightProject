#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "SpectateLeaveTriggeredDelegateDelegate.h"
#include "SpectateBarViewInterface.h"
#include "SpectateRightArrowTriggeredelegateDelegate.h"
#include "SpectateLeftArrowTriggeredDelegateDelegate.h"
#include "CoreSpectateBarWidget.generated.h"

class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSpectateBarWidget : public UCoreBaseHudWidget, public ISpectateBarViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputSwitcherWidget* LeaveInputSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputSwitcherWidget* LeftArrowInputSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputSwitcherWidget* RightArrowInputSwitcher;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpectateLeaveTriggeredDelegate _leaveTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpectateLeftArrowTriggeredDelegate _leftArrowTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpectateRightArrowTriggeredelegate _rightArrowTriggeredDelegate;
    
public:
    UCoreSpectateBarWidget();
private:
    UFUNCTION()
    void OnRightArrowTriggered();
    
    UFUNCTION()
    void OnLeftArrowTriggered();
    
    UFUNCTION()
    void OnLeaveTriggered();
    
    
    // Fix for true pure virtual functions not being implemented
};

