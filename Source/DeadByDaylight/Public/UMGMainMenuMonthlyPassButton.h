#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGMainMenuMonthlyPassButton.generated.h"

class UWidgetSwitcher;
class UAkAudioEvent;
class UButton;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMainMenuMonthlyPassButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* ButtonSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ActiveButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* NonActiveButton;
    
    UPROPERTY(BlueprintReadOnly)
    FText PlayerName;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnClickSound;
    
public:
    UUMGMainMenuMonthlyPassButton();
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonClick();
    
};

