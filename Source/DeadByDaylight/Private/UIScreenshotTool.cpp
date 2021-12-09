#include "UIScreenshotTool.h"

AUIScreenshotTool::AUIScreenshotTool() {
    this->PostProcessVolume = NULL;
    this->ScreenshotResolution = 4096;
    this->IconResolution = 256;
    this->DelayBeforeTakingScreenshot = 5.00f;
    this->Batching = EScreenShotBatching::SelectedItemOrOutfit;
    this->CurrentPartCategory = ECustomizationCategory::None;
    this->ScreenshotCamera = NULL;
    this->UpdateCameraFromViewSettings = true;
    this->_spawnedCharm = NULL;
}

