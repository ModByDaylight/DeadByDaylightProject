#pragma once
#include "CoreMinimal.h"
#include "EUIActionType.generated.h"

UENUM()
enum class EUIActionType : uint8 {
    Accept,
    Cancel,
    Previous,
    Next,
};

