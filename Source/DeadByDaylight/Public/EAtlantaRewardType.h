#pragma once
#include "CoreMinimal.h"
#include "EAtlantaRewardType.generated.h"

UENUM(BlueprintType)
enum class EAtlantaRewardType : uint8 {
    Item,
    AddOn,
    Offering,
    BloodPoints,
    IridescentShards,
    AuricCells,
    Customization,
    FreeTicket,
    MysteryBox,
    Character,
    DuplicatesRefundKey,
    Count,
};

