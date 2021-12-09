#pragma once
#include "CoreMinimal.h"
#include "EKnowledgeSharingType.generated.h"

UENUM()
enum class EKnowledgeSharingType : uint8 {
    Possessor,
    Survivors,
    Killers,
    All,
};

