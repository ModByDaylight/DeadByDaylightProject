#include "UMGAtlantaTutorialGenericPopup.h"

void UUMGAtlantaTutorialGenericPopup::TriggerChangeImagesTimer() {
}

void UUMGAtlantaTutorialGenericPopup::HandleImageButtonClicked(int32 imageIndex) {
}

UUMGAtlantaTutorialGenericPopup::UUMGAtlantaTutorialGenericPopup() {
    this->ImageTutorial = NULL;
    this->ImagesCanvas = NULL;
    this->ButtonsPanel = NULL;
    this->ButtonWidth = 60.00f;
    this->DelayBeforeChangingImage = 3.00f;
}

