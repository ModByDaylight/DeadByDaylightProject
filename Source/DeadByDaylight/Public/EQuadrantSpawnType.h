#pragma once
#include "CoreMinimal.h"
#include "EQuadrantSpawnType.generated.h"

UENUM(BlueprintType)
enum class EQuadrantSpawnType : uint8 {
    L_Shape,
    Square,
    Rect_X,
    Rect_Y,
    Rect,
    None,
};

