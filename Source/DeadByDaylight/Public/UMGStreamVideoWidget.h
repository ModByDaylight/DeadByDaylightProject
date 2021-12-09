#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStreamVideoWidget.generated.h"

class UImage;
class UButton;
class UUMGBaseButtonWidget;

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
    
    UFUNCTION()
    void OnTapButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnSkipButtonClicked();
    
public:
    UUMGStreamVideoWidget();
};

