#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemType : uint8 {
    None,
    Item,
    ItemAddOn,
    CamperPerk,
    Power,
    PowerAddOn,
    SlasherPerk,
    Favor,
    Customization,
    IridescentShardsPack,
    AuricCellsPack,
    BloodPointsPack,
    FreeTicket,
    Chest,
    SuperChest,
    EntityBox,
    Count,
};

