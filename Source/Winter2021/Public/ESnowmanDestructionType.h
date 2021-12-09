#pragma once
#include "CoreMinimal.h"
#include "ESnowmanDestructionType.generated.h"

UENUM()
enum class ESnowmanDestructionType : uint8 {
    None,
    SurvivorRunExit,
    KillerAttackWhileControlled,
    KillerAttackWhileEmpty,
};

