#pragma once
#include "CoreMinimal.h"
#include "EToastInputType.generated.h"

UENUM()
enum class EToastInputType : int32 {
    Toast_Accept,
    Toast_Reject,
    Toast_Close,
    Toast_MAX UMETA(Hidden),
};

