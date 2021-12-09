#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSettingContextButton.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGSettingContextButtonOnSettingContextButtonClickEvent, int32, tabIndex);

UCLASS(Abstract, EditInlineNew)
class UUMGSettingContextButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGSettingContextButtonOnSettingContextButtonClickEvent OnSettingContextButtonClickEvent;
    
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
    
    UUMGSettingContextButton();
};

