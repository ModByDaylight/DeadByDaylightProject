#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EEasingType.h"
#include "CoreBaseHudWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCoreBaseHudWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusAnimationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEasingType FocusAnimationEasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusAnimationMaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusAnimationMinOpacity;
    
public:
    UCoreBaseHudWidget();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldPlayFocusAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFocusAnimation();
    
};

