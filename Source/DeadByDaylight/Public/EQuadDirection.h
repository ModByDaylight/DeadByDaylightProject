#pragma once
#include "CoreMinimal.h"
#include "EQuadDirection.generated.h"

UENUM()
enum class EQuadDirection {
    None,
    Up,
    Down,
    Left,
    Right,
    Empty,
};

