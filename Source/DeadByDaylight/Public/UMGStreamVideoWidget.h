#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStreamVideoWidget.generated.h"

class UUMGBaseButtonWidget;
class UImage;
class UButton;

UCLASS(Abstract, EditInlineNew)
class UUMGStreamVideoWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* VideoImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* TapButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBaseButtonWidget* SkipButton;
    
    UPROPERTY(EditDefaultsOnly)
    float _timerShowSkipButton;
    
public:
    UUMGStreamVideoWidget();
protected:
    UFUNCTION()
    void OnTapButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnSkipButtonClicked();
    
};

