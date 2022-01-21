#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPopupButton.generated.h"

class UImage;

UCLASS(EditInlineNew)
class UUMGPopupButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float DisabledOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float EnabledOpacity;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* VFXs;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Line;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* FXSmoke;
    
public:
    UUMGPopupButton();
    UFUNCTION()
    void OnButtonReleased();
    
    UFUNCTION()
    void OnButtonPressed();
    
    UFUNCTION()
    void OnButtonClicked();
    
};

