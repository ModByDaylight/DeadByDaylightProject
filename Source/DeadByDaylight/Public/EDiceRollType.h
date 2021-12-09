#pragma once
#include "CoreMinimal.h"
#include "EDiceRollType.generated.h"

UENUM()
enum class EDiceRollType : uint8 {
    VE_EscapeHook,
    VE_EscapeTrap,
    VE_TrapInflictsDying,
    VE_TriggerSkillCheck,
    VE_TriggerFootNoise,
    VE_TriggerCrowAlert,
    VE_MAX UMETA(Hidden),
};

