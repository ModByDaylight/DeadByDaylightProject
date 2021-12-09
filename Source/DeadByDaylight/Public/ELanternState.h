#pragma once
#include "CoreMinimal.h"
#include "ELanternState.generated.h"

UENUM()
enum class ELanternState : uint8 {
    Collectable,
    Collected,
    Destroyed,
    Destroyable,
};

