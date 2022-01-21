#pragma once
#include "CoreMinimal.h"
#include "SpectateBarViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "SpectateLeaveButtonClickDelegate.h"
#include "SpectateLeftArrowClickDelegate.h"
#include "SpectateRightArrowClickDelegate.h"
#include "CoreSpectateBarWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSpectateBarWidget : public UCoreBaseHudWidget, public ISpectateBarViewInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpectateLeaveButtonClickDelegate _leaveButtonClickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpectateLeftArrowClickDelegate _leftArrowClickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpectateRightArrowClickDelegate _rightArrowClickDelegate;
    
public:
    UCoreSpectateBarWidget();
    
    // Fix for true pure virtual functions not being implemented
};

