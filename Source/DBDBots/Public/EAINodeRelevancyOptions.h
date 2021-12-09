#pragma once
#include "CoreMinimal.h"
#include "EAINodeRelevancyOptions.generated.h"

UENUM()
enum class EAINodeRelevancyOptions : uint8 {
    OnEnter,
    OnExit,
    OnEnterAndExit,
    OnTick,
};

