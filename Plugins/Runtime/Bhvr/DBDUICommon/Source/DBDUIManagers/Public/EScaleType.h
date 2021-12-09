#pragma once
#include "CoreMinimal.h"
#include "EScaleType.generated.h"

UENUM(BlueprintType)
enum class EScaleType : uint8 {
    None,
    Menu,
    Hud,
    SkillCheck,
};

