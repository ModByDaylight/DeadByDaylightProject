#include "UMGSwitcherScreen.h"

void UUMGSwitcherScreen::BroadcastSlotClickedEvent(int32 loadoutSlot) {
}

void UUMGSwitcherScreen::BroadcastItemUnSelectedEvent(int32 itemIndex) {
}

void UUMGSwitcherScreen::BroadcastItemSelectedEvent(int32 itemIndex) {
}

void UUMGSwitcherScreen::BroadcastCharacterSelectedEvent(int32 characterIndex) {
}

void UUMGSwitcherScreen::BroadcastCharacterRoleButtonClickedEvent() {
}

void UUMGSwitcherScreen::BroadcastCharacterInfoButtonClickedEvent() {
}

void UUMGSwitcherScreen::BroadcastBloodStoreRegenerate(int32 characterId) {
}

void UUMGSwitcherScreen::BroadcastBloodNodeSelected(int32 characterId, int32 nodeId, int32 nodeDepth) {
}

void UUMGSwitcherScreen::BroadcastBloodNodePurchase(int32 characterId) {
}

UUMGSwitcherScreen::UUMGSwitcherScreen() {
    this->ContainerWidgetSwitcher = NULL;
    this->BloodStoreWidget = NULL;
    this->LoadoutWidget = NULL;
    this->CharacterSelectionWidget = NULL;
}

