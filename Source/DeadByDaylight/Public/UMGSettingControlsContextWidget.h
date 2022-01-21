#pragma once
#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingControlsContextWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGSettingControlsContextWidget : public UUMGSettingContextWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool AimAssist;
    
    UPROPERTY(BlueprintReadWrite)
    int32 HandSide;
    
    UPROPERTY(BlueprintReadWrite)
    int32 InteractionButton;
    
    UPROPERTY(BlueprintReadWrite)
    bool InvertY;
    
    UPROPERTY(BlueprintReadWrite)
    float KillerCameraSensitivity;
    
    UPROPERTY(BlueprintReadWrite)
    float SurvivorCameraSensitivity;
    
public:
    UUMGSettingControlsContextWidget();
    UFUNCTION(BlueprintCallable)
    void HandleSurvivorCameraSensitivityChanged(float sliderValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleKillerCameraSensitivityChanged(float sliderValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleInvertYToggleClick(bool toggleValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionButtonToggleClick(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void HandleHandSideToggleClick(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void HandleAimAssistToggleClick(bool toggleValue);
    
};

