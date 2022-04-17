#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "EActionButtonState.h"
#include "ActionButton.generated.h"

class UImage;
class UButton;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UActionButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FSlateBrush DefaultImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ToggleSmokeImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* Button;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ToggledOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DisabledOpacity;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush Normal;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush Toggled;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush Disabled;
    
    UPROPERTY(Transient)
    EActionButtonState _currentState;
    
    UPROPERTY(Transient)
    EActionButtonState _previousState;
    
public:
    UActionButton();
    UFUNCTION(BlueprintCallable)
    void SetState(EActionButtonState state);
    
    UFUNCTION(BlueprintCallable)
    void SetSlateBrush(const FSlateBrush& InBrush);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPreviousState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIcon(FSlateBrush slateBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBecameAvailableAnimation();
    
};

