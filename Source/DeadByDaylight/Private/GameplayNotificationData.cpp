#include "GameplayNotificationData.h"

FGameplayNotificationData::FGameplayNotificationData() {
    this->SourceType = EInventoryItemType::None;
    this->SourceIconIndex = 0;
    this->SourceLevel = 0;
    this->EffectType = EStatusEffectType::None;
}

