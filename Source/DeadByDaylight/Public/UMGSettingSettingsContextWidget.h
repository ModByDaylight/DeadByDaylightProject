#pragma once
#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingSettingsContextWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGSettingSettingsContextWidget : public UUMGSettingContextWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool MainVolumeOn;
    
    UPROPERTY(BlueprintReadWrite)
    float MainVolume;
    
    UPROPERTY(BlueprintReadWrite)
    bool MenuVolumeOn;
    
    UPROPERTY(BlueprintReadWrite)
    float MenuVolume;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsLoggedIn;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEnableUserCenterWithLoggedOut;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsLeaveTutorialButtonVisible;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAutoDeclineFriendRequestOn;
    
public:
    UUMGSettingSettingsContextWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowLinkAccountRow(bool isShow);
    
    UFUNCTION(BlueprintCallable)
    void HandleUserCenterButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void HandleMenuVolumeToggleClick(bool toggleValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleMenuVolumeChanged(float sliderValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleMainVolumeToggleClick(bool toggleValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleMainVolumeChanged(float sliderValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleLogOutButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void HandleLogInButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void HandleLeaveTutorialButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void HandleAutoDeclineFriendRequestToggleClick(bool toggleValue);
    
};

