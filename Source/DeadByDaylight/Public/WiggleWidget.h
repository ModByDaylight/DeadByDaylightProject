#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "WiggleWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWiggleWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float TimeBetweenAnimationStart;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMobileBaseUserWidget* WiggleButtonLeft;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMobileBaseUserWidget* WiggleButtonRight;
    
public:
    UWiggleWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BecomeUnavailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BecomeAvailable();
    
};

