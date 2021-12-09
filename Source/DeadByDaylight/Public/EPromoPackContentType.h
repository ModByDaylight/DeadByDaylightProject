#pragma once
#include "CoreMinimal.h"
#include "EPromoPackContentType.generated.h"

UENUM()
enum class EPromoPackContentType : uint8 {
    None,
    Item,
    Addon,
    Offering,
    Character,
    Customization,
    Bonus,
    BloodPoints,
    IridescentShards,
    FreeTicket,
    Count,
};

