#pragma once
#include "CoreMinimal.h"
#include "EIsCamperStateOnFilter.generated.h"

UENUM()
enum class EIsCamperStateOnFilter : uint8 {
    OnBlackboardKey,
    OnOthersThanSelf,
};

