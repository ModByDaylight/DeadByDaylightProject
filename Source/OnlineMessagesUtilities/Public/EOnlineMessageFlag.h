#pragma once
#include "CoreMinimal.h"
#include "EOnlineMessageFlag.generated.h"

UENUM()
enum class EOnlineMessageFlag {
    New,
    Read,
    Archived,
};

