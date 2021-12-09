#include "TeachableTooltipData.h"

FTeachableTooltipData::FTeachableTooltipData() {
    this->ItemRarity = EItemRarity::Common;
    this->ItemType = EInventoryItemType::None;
    this->UseInCharacterSelectionScreen = false;
    this->TeachableStatus = ETeachableStatus::Unknown;
}

