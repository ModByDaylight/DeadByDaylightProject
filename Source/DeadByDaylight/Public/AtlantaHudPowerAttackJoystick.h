#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudPowerAttackJoystick.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudPowerAttackJoystick : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AnimationContainer;
    
    UPROPERTY(EditDefaultsOnly)
    FName _availableAnimationName;
    
    UPROPERTY(EditDefaultsOnly)
    FName _fadeOutAnimationName;
    
    UPROPERTY(EditDefaultsOnly)
    FName _tutoStartAnimationName;
    
    UPROPERTY(EditDefaultsOnly)
    FName _tutoLoopAnimationName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Icon;
    
public:
    UAtlantaHudPowerAttackJoystick();
protected:
    UFUNCTION()
    void OnFinishedTutorialAnimationIn();
    
    UFUNCTION()
    void OnFinishedAvailableAnimation();
    
};

