#pragma once
#include "CoreMinimal.h"
#include "ETestBuildType.generated.h"

UENUM()
enum class ETestBuildType : uint8 {
    None,
    PublicTestBuild,
    PaxBuild,
    ConsolePreAlphaBuild,
};

