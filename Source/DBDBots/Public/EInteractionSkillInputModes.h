#pragma once
#include "CoreMinimal.h"
#include "EInteractionSkillInputModes.generated.h"

UENUM()
enum class EInteractionSkillInputModes : uint8 {
    Once,
    Hold,
    Toggle,
    ToggleHold,
    OneClickHold,
};

