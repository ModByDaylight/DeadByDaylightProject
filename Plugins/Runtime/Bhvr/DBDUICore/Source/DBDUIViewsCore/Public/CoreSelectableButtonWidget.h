#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreSelectableButtonWidget.generated.h"

class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSelectableButtonWidget : public UCoreButtonWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectedChangedDelegate, UCoreSelectableButtonWidget*, buttonTarget, bool, isSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedAgainDelegate, UCoreSelectableButtonWidget*, buttonTarget);
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectedChangedDelegate OnSelectedChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectedAgainDelegate OnSelectedAgainDelegate;
    
    UCoreSelectableButtonWidget();
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
    
};

