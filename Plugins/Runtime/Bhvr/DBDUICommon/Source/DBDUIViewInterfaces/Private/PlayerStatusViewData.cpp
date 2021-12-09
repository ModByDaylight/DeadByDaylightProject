#include "PlayerStatusViewData.h"

FPlayerStatusViewData::FPlayerStatusViewData() {
    this->PlayerPortraitIcon = NULL;
    this->PlayerPortraitIconOverride = NULL;
    this->PlayerStatusState = EPlayerStatus::Default;
    this->TimerProgress = 0.00f;
    this->IsDeepWound = false;
    this->IsBroken = false;
    this->IsLocalPlayerAKiller = false;
    this->ObsessionState = EObsessionUIState::Off;
    this->DrainStage = 0;
}

