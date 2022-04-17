#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "EGameType.h"
#include "OverlayMenuScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UOverlayMenuScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UOverlayMenuScreen();
    UFUNCTION()
    void SetGameType(EGameType gameType);
    
    UFUNCTION()
    void OnSurvivorCameraSensitivityChanged(int32 value);
    
    UFUNCTION()
    void OnSettingsOptionIntValueChanged(int32 id, int32 value);
    
    UFUNCTION()
    void OnSettingsOptionCheckboxSelected(int32 id, bool isSelected);
    
    UFUNCTION()
    void OnSettingsOptionButtonClicked(int32 id);
    
    UFUNCTION()
    void OnSelectTab(int32 tabIndex);
    
    UFUNCTION()
    void OnResetDefaultSettings();
    
    UFUNCTION()
    void OnResetDefaultKeybindings();
    
    UFUNCTION()
    void OnRequestKeyBindingInput(int32 id, const FString& key);
    
    UFUNCTION()
    void OnQuitButtonClick();
    
    UFUNCTION()
    void OnPrivacyPolicyButtonClick();
    
    UFUNCTION()
    void OnPlayerInfoClick(const FString& playerId);
    
    UFUNCTION()
    void OnLanguageChange(int32 value);
    
    UFUNCTION()
    void OnKillerCameraSensitivityChanged(int32 value);
    
    UFUNCTION()
    void OnForumsButtonClick();
    
    UFUNCTION()
    void OnEULAButtonClick();
    
    UFUNCTION()
    void OnCustomerSupportButtonClick();
    
    UFUNCTION()
    void OnBackButtonClick();
    
    UFUNCTION()
    void OnAtlantaSettingButtonClick(int32 buttonID);
    
    UFUNCTION()
    void OnAimAssistClick(bool value);
    
};

