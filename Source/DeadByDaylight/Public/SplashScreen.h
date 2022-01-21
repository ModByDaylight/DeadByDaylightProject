#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "DownloadProgression.h"
#include "CharacterSlideData.h"
#include "SplashScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USplashScreen : public UScreenBase {
    GENERATED_BODY()
public:
    USplashScreen();
    UFUNCTION()
    void UpdateShadersPrecompilingProgression(const float percentageCompleted) const;
    
    UFUNCTION()
    void UpdateLoadingProgression(const FString& loadingProgression) const;
    
    UFUNCTION()
    void UpdateDownloadProgression(const FDownloadProgression& downloadProgression) const;
    
    UFUNCTION()
    void ShowShadersPrecompilingProgression() const;
    
    UFUNCTION()
    void ShowSaveGamePopup() const;
    
    UFUNCTION()
    void ShowPressKeyState() const;
    
    UFUNCTION()
    void ShowLoadingState() const;
    
    UFUNCTION()
    void ShowDownloadProgression() const;
    
    UFUNCTION()
    void ShowCharacterSlideShow(TArray<FCharacterSlideData>& characterSlides);
    
    UFUNCTION()
    void SetVersionText(const FString& versionText) const;
    
protected:
    UFUNCTION()
    void OnSaveGamePopupComplete();
    
public:
    UFUNCTION()
    void HideShadersPrecompilingProgression() const;
    
    UFUNCTION()
    void HidePressKeyState() const;
    
    UFUNCTION()
    void HideLoadingState() const;
    
    UFUNCTION()
    void HideDownloadProgression() const;
    
    UFUNCTION()
    void HideCharacterSlideShow();
    
};

