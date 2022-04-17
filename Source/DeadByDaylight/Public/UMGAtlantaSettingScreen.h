#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EOverlayTabs.h"
#include "UMGAtlantaSettingScreen.generated.h"

class UWidgetSwitcher;
class UUMGSettingMenuButton;
class UHorizontalBox;
class UUMGSettingContextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class UUMGAtlantaSettingScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* SettingContextSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* SettingTabBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* AlwaysDisplayButtonBox;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGSettingMenuButton> _settingTabButtonClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGSettingMenuButton> _settingAlwaysDisplayButtonClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftObjectPtr<UTexture2D> _buttonBoxDividerAsset;
    
    UPROPERTY(EditAnywhere, NoClear, Transient)
    TMap<EOverlayTabs, TSoftClassPtr<UUMGSettingContextWidget>> _overlayContextWidgetMap;
    
private:
    UPROPERTY(Export, Transient)
    TMap<EOverlayTabs, UUMGSettingContextWidget*> _contextWidgetMap;
    
public:
    UUMGAtlantaSettingScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCreditsOrConsentsPopup(const FString& title, const FString& content);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetRightTopTextInfo(const FText& title, const FString& content, ESlateVisibility textVisibility);
    
    UFUNCTION()
    void HandleSurvivorCameraSensitivityChanged(int32 value);
    
    UFUNCTION()
    void HandleSettingTabClick(int32 tabIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleLeaveButtonClick();
    
    UFUNCTION()
    void HandleLanguageButtonClick(int32 index);
    
    UFUNCTION()
    void HandleKillerCameraSensitivityChanged(int32 value);
    
    UFUNCTION()
    void HandleInvertYToggleClick(bool toggleValue);
    
    UFUNCTION()
    void HandleInteractionButtonToggleClick(int32 index);
    
    UFUNCTION()
    void HandleHandSideToggleClick(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void HandleContextButtonClickEvent(int32 index);
    
    UFUNCTION()
    void HandleAlwaysDisplayButtonClick(int32 tabIndex);
    
    UFUNCTION()
    void HandleAimAssistToggleClick(bool toggleValue);
    
};

