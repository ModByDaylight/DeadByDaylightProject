#include "DBDGameUserSettings.h"

class UDBDGameUserSettings;

int32 UDBDGameUserSettings::GetSkillCheckScaleFactor() const {
    return 0;
}

int32 UDBDGameUserSettings::GetMenuScaleFactor() const {
    return 0;
}

bool UDBDGameUserSettings::GetLargeText() const {
    return false;
}

bool UDBDGameUserSettings::GetHUDScoreEventsVisibility() const {
    return false;
}

int32 UDBDGameUserSettings::GetHudScaleFactor() const {
    return 0;
}

bool UDBDGameUserSettings::GetHUDPlayerNamesVisibility() const {
    return false;
}

bool UDBDGameUserSettings::GetHUDKillerHookCountVisibility() const {
    return false;
}

UDBDGameUserSettings* UDBDGameUserSettings::GetDBDGameUserSettings() {
    return NULL;
}

int32 UDBDGameUserSettings::GetColorBlindModeIntensity() const {
    return 0;
}

EColorVisionDeficiency UDBDGameUserSettings::GetColorBlindMode() const {
    return EColorVisionDeficiency::NormalVision;
}

UDBDGameUserSettings::UDBDGameUserSettings() {
    this->ScalabilityLevel = 3;
    this->AutoScalabilitySet = false;
    this->AutoAdjust = false;
    this->ScreenResolution = 100;
    this->FullScreen = true;
    this->MenuScaleFactor = 100;
    this->HudScaleFactor = 100;
    this->SkillCheckScaleFactor = 100;
    this->LargeText = false;
    this->HUDPlayerNamesVisibility = true;
    this->HUDKillerHookCountVisibility = true;
    this->HUDScoreEventsVisibility = true;
    this->FPSLimit = 30;
    this->MainVolume = 20;
    this->MainVolumeOn = true;
    this->MenuMusicVolume = 40;
    this->MenuMusicVolumeOn = true;
    this->UseHeadphones = true;
    this->MuteOnFocusLost = true;
    this->KillerCameraSensitivity = 50;
    this->SurvivorCameraSensitivity = 50;
    this->KillerMouseSensitivity = 50;
    this->SurvivorMouseSensitivity = 50;
    this->KillerControllerSensitivity = 5;
    this->SurvivorControllerSensitivity = 20;
    this->AimAssist = false;
    this->ControlType = 1;
    this->InvertY = false;
    this->SurvivorInvertY = false;
    this->KillerToggleInteractions = false;
    this->SurvivorToggleInteractions = false;
    this->SprintToCancel = false;
    this->Language = TEXT("en");
    this->LanguageIsDefinedByPlayer = false;
    this->HighestWeightSeenNews = 30397;
    this->LastPanelContextId = 0;
    this->ArchivesAutoPlayVoiceOver = true;
    this->HasAcceptedCrossplayPopup = true;
    this->HasAcceptedCrossProgressionPopup = true;
    this->UseAtlantaCustomizedHuds = false;
    this->UseAtlantaSurvivorQuickTurn = true;
    this->UseAtlantaKillerQuickTurn = true;
    this->ShowPortraitBorder = false;
    this->PartyPrivacyState = TEXT("public");
    this->ColorBlindMode = 0;
    this->ColorBlindModeIntensity = 0;
    this->BeginnerMode = true;
    this->Subtitles = false;
    this->SubtitlesBackgroundOpacity = 1;
    this->SubtitlesSize = 1;
}

