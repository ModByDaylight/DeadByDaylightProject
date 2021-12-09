#include "InventorySlotData.h"

FInventorySlotData::FInventorySlotData() {
    this->OfferingCategory = EOfferingCategory::None;
    this->ItemType = EInventoryItemType::None;
    this->Rarity = EItemRarity::Common;
    this->StatusEffectType = EStatusEffectType::None;
    this->Level = 0;
    this->StackCount = 0;
    this->Availability = EItemAvailability::Available;
    this->IsTeachablePerk = false;
    this->IsSlasherPerk = false;
    this->IsPerkAvailableInFearMarket = false;
    this->IsPerkAvailableInBloodWeb = false;
    this->TeachableLevel = 0;
    this->IsLocked = false;
    this->UnlockableLevel = 0;
    this->IsLimitedItem = false;
    this->IsPrivateIcon = false;
    this->IsEnabled = false;
}

