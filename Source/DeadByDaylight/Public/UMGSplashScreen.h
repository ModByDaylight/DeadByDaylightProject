#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSplashScreen.generated.h"

class UUMGDownloadProgressionWidget;
class UCanvasPanel;
class UUMGCharacterSlideShowWidget;
class UButton;
class UTextBlock;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGSplashScreenOnScreenTouched);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGSplashScreenOnSaveGamePopupCompleteEvent);

UCLASS(EditInlineNew)
class UUMGSplashScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGSplashScreenOnSaveGamePopupCompleteEvent OnSaveGamePopupCompleteEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGSplashScreenOnScreenTouched OnScreenTouched;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SavePopup;
    
private:
    UPROPERTY(Export)
    UTextBlock* GameVersion;
    
    UPROPERTY(Export)
    UTextBlock* LoadingState;
    
    UPROPERTY(Export)
    UTextBlock* PressKey;
    
    UPROPERTY(Export)
    UButton* TapButton;
    
    UPROPERTY(Export)
    UTextBlock* SaveGameTitle;
    
    UPROPERTY(Export)
    UTextBlock* SaveGameDescription;
    
    UPROPERTY(Export)
    UUMGDownloadProgressionWidget* DownloadProgression;
    
    UPROPERTY(Export)
    UUMGCharacterSlideShowWidget* CharacterSlideShow;
    
    UFUNCTION()
    void OnTapButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnSaveGamePopupComplete() const;
    
    UUMGSplashScreen();
};

