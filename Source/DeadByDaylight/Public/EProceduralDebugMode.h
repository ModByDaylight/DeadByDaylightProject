#pragma once
#include "CoreMinimal.h"
#include "EProceduralDebugMode.generated.h"

UENUM()
enum class EProceduralDebugMode {
    None,
    NoMap,
    TilesSmall,
    TilesBig,
    Count,
};

