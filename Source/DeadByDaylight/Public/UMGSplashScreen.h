#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnSaveGamePopupCompleteDelegate.h"
#include "OnScreenTouchedDelegate.h"
#include "UMGSplashScreen.generated.h"

class UUMGDownloadProgressionWidget;
class UUMGCharacterSlideShowWidget;
class UButton;
class UCanvasPanel;
class UTextBlock;

UCLASS(EditInlineNew)
class UUMGSplashScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSaveGamePopupComplete OnSaveGamePopupCompleteEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnScreenTouched OnScreenTouched;
    
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
    
public:
    UUMGSplashScreen();
private:
    UFUNCTION()
    void OnTapButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnSaveGamePopupComplete() const;
    
};

