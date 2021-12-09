#pragma once
#include "CoreMinimal.h"
#include "ELoadoutType.generated.h"

UENUM()
enum class ELoadoutType : uint8 {
    Item,
    Perk,
    Offering,
};

