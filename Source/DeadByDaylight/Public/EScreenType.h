#pragma once
#include "CoreMinimal.h"
#include "EScreenType.generated.h"

UENUM()
enum class EScreenType : uint8 {
    eScaleformScreen,
    eUMGScreen,
    eMixedScaleformUMG,
};

