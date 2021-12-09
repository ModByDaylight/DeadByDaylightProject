#pragma once
#include "CoreMinimal.h"
#include "EOwnership.generated.h"

UENUM()
enum class EOwnership {
    Owned,
    NotOwned,
    Any,
};

