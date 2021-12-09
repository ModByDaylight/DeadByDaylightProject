#pragma once
#include "CoreMinimal.h"
#include "EHelpType.generated.h"

UENUM(BlueprintType)
enum class EHelpType : uint8 {
    General,
    Survivor,
    Killer,
};

