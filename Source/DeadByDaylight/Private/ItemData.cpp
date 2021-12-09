#include "ItemData.h"

FItemData::FItemData() {
    this->HandPosition = EItemHandPosition::None;
    this->Role = EPlayerRole::VE_None;
    this->Rarity = EItemRarity::Common;
    this->Inventory = false;
    this->Chest = false;
    this->RequiredKillerAbility = EKillerAbilities::VE_None;
    this->IsInNonViolentBuild = false;
    this->IsAvailableInAtlantaBuild = false;
    this->AntiDLC = false;
    this->Bloodweb = false;
    this->CanKeepInLoadout = false;
    this->CanUseAfterEventEnd = false;
    this->ItemType = ELoadoutItemType::None;
}

