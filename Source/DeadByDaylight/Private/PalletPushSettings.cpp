#include "PalletPushSettings.h"

FPalletPushSettings::FPalletPushSettings() {
    this->IgnorePlayerExecutingPulldown = false;
    this->PalletPushSideStrategy = EPalletPushSideStrategy::PushToClosestPalletSide;
}

