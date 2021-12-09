#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EAnalogCursorStickiness.h"
#include "EButtonWidgetVisibility.h"
#include "CoreButtonWidget.generated.h"

class UCoreButtonWidget;
class UAkAudioEvent;
class UDBDButton;
class UDBDTextBlock;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonWidgetOnClickedDelegate, UCoreButtonWidget*, buttonTarget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonWidgetOnHoveredDelegate, UCoreButtonWidget*, buttonTarget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonWidgetOnUnhoveredDelegate, UCoreButtonWidget*, buttonTarget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonWidgetOnPressedDelegate, UCoreButtonWidget*, buttonTarget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreButtonWidgetOnReleasedDelegate, UCoreButtonWidget*, buttonTarget);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCoreButtonWidgetOnHoveredDelegate OnHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreButtonWidgetOnUnhoveredDelegate OnUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreButtonWidgetOnPressedDelegate OnPressedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreButtonWidgetOnReleasedDelegate OnReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCoreButtonWidgetOnClickedDelegate OnClickedDelegate;
    
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
    
    UCoreButtonWidget();
};

