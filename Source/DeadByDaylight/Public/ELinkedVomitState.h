#pragma once
#include "CoreMinimal.h"
#include "ELinkedVomitState.generated.h"

UENUM()
enum class ELinkedVomitState : uint8 {
    Idle,
    Charging,
    Vomiting,
};

