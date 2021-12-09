#pragma once
#include "CoreMinimal.h"
#include "EEventItemContentType.generated.h"

UENUM()
enum class EEventItemContentType : uint8 {
    None,
    Cells,
    Character,
    Customization,
    NameChangeCard,
    FreeTicket,
    OtherCurrency,
    Item,
    Addon,
    Offering,
    Count,
};

