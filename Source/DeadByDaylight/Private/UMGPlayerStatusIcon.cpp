#include "UMGPlayerStatusIcon.h"



void UUMGPlayerStatusIcon::OnPlayerStatusButtonClicked() {
}

UUMGPlayerStatusIcon::UUMGPlayerStatusIcon() {
    this->HealthBar = NULL;
    this->TimerBar = NULL;
    this->HealthBarContainer = NULL;
    this->TimerBarContainer = NULL;
    this->PlayerName = NULL;
    this->StatusIconBloodTop = NULL;
    this->StatusIconBloodBottom = NULL;
    this->StatusIcon = NULL;
    this->ObsessionCanvas = NULL;
    this->BrokenIndicatorCanvas = NULL;
    this->AfflictionCanvas = NULL;
    this->AfflictionIntroCanvas = NULL;
    this->SleepStatusCanvas = NULL;
    this->SleepTimerCanvas = NULL;
    this->ReverseBearTrapCanvas = NULL;
    this->ReverseBearTrapArrow = NULL;
    this->SicknessCanvas = NULL;
    this->SicknessFill = NULL;
    this->SpectateCanvas = NULL;
    this->SelectedSpectatorCanvas = NULL;
    this->AgonyCanvas = NULL;
    this->HandsGrabbing = NULL;
    this->SicknessFillHighOpacity = 0.00f;
    this->SicknessFillLowOpacity = 0.00f;
    this->StatusEffectContainerCanvas = NULL;
    this->SicknessFillMI = NULL;
    this->_hookedTexture = NULL;
    this->_hookedBloodTexture = NULL;
    this->_trappedTexture = NULL;
    this->_trappedBloodTexture = NULL;
    this->_deadTexture = NULL;
    this->_deadBloodTexture = NULL;
    this->_escapedTexture = NULL;
    this->_injuredTexture = NULL;
    this->_injuredBloodTexture = NULL;
    this->_crawlingTexture = NULL;
    this->_crawlingBloodTexture = NULL;
    this->_sacrificedTexture = NULL;
    this->_sacrificedBloodTexture = NULL;
    this->_disconnectedTexture = NULL;
    this->_deathBedTexture = NULL;
    this->_defaultTexture = NULL;
    this->_maxNumberCharacterInName = 0;
    this->_stalkingStatusEffectUI = NULL;
    this->_lacerationStatusEffectUI = NULL;
}

