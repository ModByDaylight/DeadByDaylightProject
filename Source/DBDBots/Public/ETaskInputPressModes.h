#pragma once
#include "CoreMinimal.h"
#include "ETaskInputPressModes.generated.h"

UENUM()
enum class ETaskInputPressModes : uint8 {
    Once,
    Loop,
    Hold,
};

