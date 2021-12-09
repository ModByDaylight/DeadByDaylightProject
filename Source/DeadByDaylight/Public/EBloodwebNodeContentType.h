#pragma once
#include "CoreMinimal.h"
#include "EBloodwebNodeContentType.generated.h"

UENUM(BlueprintType)
enum class EBloodwebNodeContentType : uint8 {
    Empty,
    Perks,
    PerkBuffs_Do_Not_Use_Deprecated,
    Offerings,
    Items,
    AddOn,
    Chests,
    PerksPacks,
    IridiscentShards,
    AuricCells,
    SuperChests,
    CosmeticItems,
    Bloodpoints,
    FreeTicket,
    EntityBox,
    Count,
};

