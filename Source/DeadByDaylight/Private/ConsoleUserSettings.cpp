#include "ConsoleUserSettings.h"

FConsoleUserSettings::FConsoleUserSettings() {
    this->MenuScaleFactor = 0;
    this->HudScaleFactor = 0;
    this->SkillCheckScaleFactor = 0;
    this->LargeText = false;
    this->Gamma = 0;
    this->HUDPlayerNamesVisibility = false;
    this->HUDScoreEventsVisibility = false;
    this->HUDKillerHookCountVisibility = false;
    this->MainVolume = 0;
    this->MenuMusicVolume = 0;
    this->UseHeadphones = false;
    this->MuteOnFocusLost = false;
    this->KillerMouseSensitivity = 0;
    this->SurvivorMouseSensitivity = 0;
    this->KillerControllerSensitivity = 0;
    this->SurvivorControllerSensitivity = 0;
    this->InvertY = false;
    this->SurvivorInvertY = false;
    this->KillerToggleInteractions = false;
    this->SurvivorToggleInteractions = false;
    this->SprintToCancel = false;
    this->HighestWeightSeenNews = 0;
    this->UseAtlantaCustomizedHuds = false;
    this->UseAtlantaSurvivorQuickTurn = false;
    this->UseAtlantaKillerQuickTurn = false;
    this->HasAcceptedCrossplayPopup = false;
    this->HasAcceptedCrossProgressionPopup = false;
    this->ColorBlindMode = 0;
    this->ColorBlindModeIntensity = 0;
    this->BeginnerMode = false;
    this->Subtitles = false;
    this->SubtitlesBackgroundOpacity = 0;
    this->SubtitlesSize = 0;
}

