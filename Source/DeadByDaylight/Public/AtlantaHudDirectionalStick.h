#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudDirectionalStick.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudDirectionalStick : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* JoystickAnimationPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ContainerToRotate;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ArrowsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* JoystickLockImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* JoystickOn;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AutoRunContainer;
    
    UPROPERTY(Transient)
    bool _isMovementLockAnimationActive;
    
public:
    UAtlantaHudDirectionalStick();
    UFUNCTION(BlueprintCallable)
    void SetMovementLockAnimationStatus(bool value);
    
};

