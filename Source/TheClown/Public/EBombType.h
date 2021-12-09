#pragma once
#include "CoreMinimal.h"
#include "EBombType.generated.h"

UENUM(BlueprintType)
enum class EBombType : uint8 {
    Toxin,
    Antidote,
};

