#pragma once
#include "CoreMinimal.h"
#include "ELoadoutItemType.generated.h"

UENUM(BlueprintType)
enum class ELoadoutItemType : uint8 {
    None,
    Medkit,
    Toolbox,
    Flashlight,
    Key,
    Map,
    Firecracker,
    Flashbang,
    Count,
};

