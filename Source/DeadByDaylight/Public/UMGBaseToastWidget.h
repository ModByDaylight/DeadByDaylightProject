#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseToastWidget.generated.h"

class UImage;
class UTextBlock;
class UProgressBar;

UCLASS(Abstract, EditInlineNew)
class UUMGBaseToastWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UImage* ToastIcon;
    
    UPROPERTY(Export)
    UTextBlock* ToastText;
    
    UPROPERTY(Export)
    UProgressBar* TimeToastProgression;
    
    UFUNCTION(BlueprintCallable)
    void TriggerToastInput(int32 inputCode);
    
private:
    UFUNCTION()
    void OnTimerFinished();
    
public:
    UUMGBaseToastWidget();
};

