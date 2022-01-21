#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGFriendSearchBarWidget.generated.h"

class UEditableTextBox;
class UUMGBaseButtonWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGFriendSearchBarWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UEditableTextBox* InputTextField;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* SearchButton;
    
public:
    UUMGFriendSearchBarWidget();
private:
    UFUNCTION()
    void HandleTextInputChanged(const FText& textInput);
    
    UFUNCTION()
    void HandleSearchButtonClicked();
    
};

