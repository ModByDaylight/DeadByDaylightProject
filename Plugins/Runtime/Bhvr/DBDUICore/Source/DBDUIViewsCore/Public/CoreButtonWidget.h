#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EAnalogCursorStickiness.h"
#include "EButtonWidgetVisibility.h"
#include "CoreButtonWidget.generated.h"

class UAkAudioEvent;
class UCoreButtonWidget;
class UDBDButton;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnhoveredDelegate, UCoreButtonWidget*, buttonTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReleasedDelegate, UCoreButtonWidget*, buttonTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressedDelegate, UCoreButtonWidget*, buttonTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoveredDelegate, UCoreButtonWidget*, buttonTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedDelegate, UCoreButtonWidget*, buttonTarget);
    
    UPROPERTY(BlueprintAssignable)
    FOnHoveredDelegate OnHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnhoveredDelegate OnUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPressedDelegate OnPressedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReleasedDelegate OnReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnClickedDelegate OnClickedDelegate;
    
    UPROPERTY(EditAnywhere)
    FString HoveredSfxName;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* HoveredSfx;
    
    UPROPERTY(EditAnywhere)
    FString PressedSfxName;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* PressedSfx;
    
    UPROPERTY(EditAnywhere)
    FString ClickedSfxName;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* ClickedSfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnalogCursorStickiness AnalogCursorStickiness;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDButton* HitzoneButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* LabelTB;
    
public:
    UCoreButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetVisible(EButtonWidgetVisibility visible);
    
    UFUNCTION(BlueprintCallable)
    void SetPressable(bool isPressable);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& label);
    
    UFUNCTION(BlueprintCallable)
    void SetHoverable(bool isHoverable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldable(bool isHoldable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetClickable(bool isClickable);
    
    UFUNCTION(BlueprintCallable)
    void SetChargeable(bool isChargeable);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnhovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPressed();
    
    UFUNCTION()
    void OnInternalUnhovered();
    
    UFUNCTION()
    void OnInternalReleased();
    
    UFUNCTION()
    void OnInternalPressed();
    
    UFUNCTION()
    void OnInternalHovered();
    
    UFUNCTION()
    void OnInternalClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledChanged(bool NewIsEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClicked();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

