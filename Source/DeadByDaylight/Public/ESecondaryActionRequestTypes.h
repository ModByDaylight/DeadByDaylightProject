#pragma once
#include "CoreMinimal.h"
#include "ESecondaryActionRequestTypes.generated.h"

UENUM()
enum class ESecondaryActionRequestTypes {
    None,
    SecondaryActionRequested,
    SecondaryActionRequestedFromCancel,
};

