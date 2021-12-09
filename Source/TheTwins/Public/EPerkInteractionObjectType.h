#pragma once
#include "CoreMinimal.h"
#include "EPerkInteractionObjectType.generated.h"

UENUM()
enum class EPerkInteractionObjectType : uint8 {
    Item,
    ChestClosed,
    ChestOpen,
};

