#include "UMGLoadoutItemButton.h"

void UUMGLoadoutItemButton::UpdateWidgetByState(EInventoryButtonState state) {
}


void UUMGLoadoutItemButton::UpdateWidgetByData(const FInventorySlotData& slotData) {
}

void UUMGLoadoutItemButton::UpdateUnlockable(const FString& nameToDisplay, int32 unlockableLevel) {
}

void UUMGLoadoutItemButton::UpdateStackCount(int32 stackCount) {
}

void UUMGLoadoutItemButton::UpdateImageColor(EItemRarity rarity, EStatusEffectType effectType) {
}

void UUMGLoadoutItemButton::ShowClickableOutline(bool clickable) {
}

void UUMGLoadoutItemButton::SetIsSelected(bool isSelected) {
}

void UUMGLoadoutItemButton::SetIconImageByPath(const FString& iconPath) {
}

void UUMGLoadoutItemButton::OnLockedButtonClicked() {
}



FName UUMGLoadoutItemButton::GetLoadoutItemID() {
    return NAME_None;
}

void UUMGLoadoutItemButton::BroadcastLongPressEvent(FName itemID) {
}

void UUMGLoadoutItemButton::BroadcastClickedEvent(FName itemID) {
}

UUMGLoadoutItemButton::UUMGLoadoutItemButton() {
    this->HideStackCount = false;
    this->TextStackCount = NULL;
    this->EmptyCanvas = NULL;
    this->EmptyButton = NULL;
    this->LockedButton = NULL;
    this->ActionCanvas = NULL;
    this->ImageRarityBG = NULL;
    this->ImageGradient = NULL;
    this->ImagePaint = NULL;
    this->ImageEventBorder = NULL;
    this->ImagePaintTop = NULL;
    this->ImagePaintBottom = NULL;
    this->EmptyCanvasVisibility = ESlateVisibility::Hidden;
    this->ActionCanvasVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->PrivateCanvasVisibility = ESlateVisibility::Hidden;
    this->LockIconVisibility = ESlateVisibility::Collapsed;
    this->EmptyIconVisibility = ESlateVisibility::Collapsed;
    this->SpecialEventVisiblity = ESlateVisibility::Collapsed;
    this->LoadoutSelectedVisibility = ESlateVisibility::Collapsed;
    this->LoadoutLockVisibility = ESlateVisibility::Collapsed;
    this->ImageIcon = NULL;
    this->ImageShadow = NULL;
    this->ActionButton = NULL;
    this->_triggerClickEventForLoadoutWidget = false;
    this->CanvasUnlock = NULL;
    this->TextUnlockLevel = NULL;
}

