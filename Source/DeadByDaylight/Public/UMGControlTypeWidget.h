#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EAtlantaControlTypeSetting.h"
#include "UMGControlTypeWidget.generated.h"

class UUMGBaseButtonWidget;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGControlTypeWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UUMGBaseButtonWidget* Button;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* MoveTextHalfScreenCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* AimTextHalfScreenCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* MoveTextFullScreenCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* AimTextFullScreenCanvas;
    
public:
    UUMGControlTypeWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOptionChecked(bool NewIsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsChecked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeDefaultLayout(EAtlantaControlTypeSetting controlType);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
};

