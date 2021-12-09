#pragma once
#include "CoreMinimal.h"
#include "EConditionSubject.generated.h"

UENUM()
enum class EConditionSubject : uint8 {
    Instigator,
    Target,
};

