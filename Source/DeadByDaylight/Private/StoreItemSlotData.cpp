#include "StoreItemSlotData.h"

FStoreItemSlotData::FStoreItemSlotData() {
    this->Category = ECustomizationCategory::None;
    this->Rarity = EItemRarity::Common;
    this->IsOwned = false;
    this->IsBuyable = false;
    this->IsEquipped = false;
    this->IsNewInStore = false;
    this->IsLocked = false;
    this->IsInStore = false;
    this->AssociatedRole = EPlayerRole::VE_None;
    this->IsEnabled = false;
}

