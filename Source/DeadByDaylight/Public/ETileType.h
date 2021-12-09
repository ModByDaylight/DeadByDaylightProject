#pragma once
#include "CoreMinimal.h"
#include "ETileType.generated.h"

UENUM()
enum class ETileType : uint8 {
    None,
    Blocker,
    Any,
    Forest,
    Building,
    Maze,
    Landmark,
    Signature,
};

