#pragma once
#include "CoreMinimal.h"
#include "EAtlantaRitualRewardUIType.generated.h"

UENUM(BlueprintType)
enum class EAtlantaRitualRewardUIType : uint8 {
    Item,
    AddOn,
    Offering,
    BloodPoints,
    IridescentShards,
    AuricCells,
    Customization,
    CustoTicket,
    MysteryBox,
};

