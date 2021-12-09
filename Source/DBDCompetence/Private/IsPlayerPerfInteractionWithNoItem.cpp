#include "IsPlayerPerfInteractionWithNoItem.h"

void UIsPlayerPerfInteractionWithNoItem::OnCollectableChargeStateChange(bool empty) {
}

UIsPlayerPerfInteractionWithNoItem::UIsPlayerPerfInteractionWithNoItem() {
    this->_itemType = ELoadoutItemType::None;
}

