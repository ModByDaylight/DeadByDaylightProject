#pragma once
#include "CoreMinimal.h"
#include "EKillerTutorialEndGameType.generated.h"

UENUM()
enum class EKillerTutorialEndGameType : uint8 {
    DeathByHook,
    DeathByEndGameCollapse,
};

