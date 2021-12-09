#pragma once
#include "CoreMinimal.h"
#include "ELeanState.generated.h"

UENUM()
enum class ELeanState : uint8 {
    NotLeaning,
    LeanLeft,
    LeanRight,
};

