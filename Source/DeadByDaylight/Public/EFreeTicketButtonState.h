#pragma once
#include "CoreMinimal.h"
#include "EFreeTicketButtonState.generated.h"

UENUM()
enum class EFreeTicketButtonState {
    Disabled,
    Enabled,
    InEffect,
    None,
};

