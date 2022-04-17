#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseToastWidget.generated.h"

class UProgressBar;
class UImage;
class UTextBlock;

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
    
    UUMGBaseToastWidget();
    UFUNCTION(BlueprintCallable)
    void TriggerToastInput(int32 inputCode);
    
private:
    UFUNCTION()
    void OnTimerFinished();
    
};

