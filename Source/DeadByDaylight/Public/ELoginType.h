#pragma once
#include "CoreMinimal.h"
#include "ELoginType.generated.h"

UENUM()
enum class ELoginType {
    Reservation,
    Join,
    None,
};

