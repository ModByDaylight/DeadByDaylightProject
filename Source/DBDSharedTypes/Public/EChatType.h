#pragma once
#include "CoreMinimal.h"
#include "EChatType.generated.h"

UENUM()
enum class EChatType {
    None,
    PreGame,
    PostGame,
    Party,
};

