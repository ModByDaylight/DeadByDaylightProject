#include "UMGSplashScreen.h"

void UUMGSplashScreen::OnTapButtonClicked() {
}

void UUMGSplashScreen::OnSaveGamePopupComplete() const {
}

UUMGSplashScreen::UUMGSplashScreen() {
    this->SavePopup = NULL;
    this->GameVersion = NULL;
    this->LoadingState = NULL;
    this->PressKey = NULL;
    this->TapButton = NULL;
    this->SaveGameTitle = NULL;
    this->SaveGameDescription = NULL;
    this->DownloadProgression = NULL;
    this->CharacterSlideShow = NULL;
}

