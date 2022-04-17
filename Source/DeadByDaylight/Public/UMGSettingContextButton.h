#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnSettingMenuButtonClickEventDelegate.h"
#include "UMGSettingContextButton.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGSettingContextButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSettingMenuButtonClickEvent OnSettingContextButtonClickEvent;
    
    UUMGSettingContextButton();
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsSelected(bool isSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetContextButtonData(int32 buttonID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonText(const FString& buttonText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSettingContextButtonClick();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetContextButtonData();
    
};

