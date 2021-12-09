#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreButtonSelector.generated.h"

class UCoreSelectableButtonWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonSelectorOnSelectedAgainDelegate, UCoreSelectableButtonWidget*, selectedButton);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonSelectorOnSelectedDelegate, UCoreSelectableButtonWidget*, selectedButton);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonSelectorOnUnselectedDelegate, UCoreSelectableButtonWidget*, unselectedButton);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonSelector : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCoreButtonSelectorOnSelectedDelegate OnSelectedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreButtonSelectorOnSelectedAgainDelegate OnSelectedAgainDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreButtonSelectorOnUnselectedDelegate OnUnselectedDelegate;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UCoreSelectableButtonWidget*> _buttons;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnselectCurrent();
    
    UFUNCTION(BlueprintCallable)
    void SetAllEnabled(bool enabled);
    
    UFUNCTION(BlueprintCallable)
    bool SelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    bool SelectNext();
    
    UFUNCTION(BlueprintCallable)
    bool Select(UCoreSelectableButtonWidget* buttonToSelect);
    
private:
    UFUNCTION()
    void OnButtonSelectedChanged(UCoreSelectableButtonWidget* selectedButton, bool isSelected);
    
    UFUNCTION()
    void OnButtonSelectedAgain(UCoreSelectableButtonWidget* selectedButton);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasSelection() const;
    
    UCoreButtonSelector();
};

