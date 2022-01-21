#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AnimationWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAnimationWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _playRate;
    
public:
    UAnimationWidget();
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float rate);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetPlayRate() const;
    
};

