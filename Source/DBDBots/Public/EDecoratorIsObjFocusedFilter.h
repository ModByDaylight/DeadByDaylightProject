#pragma once
#include "CoreMinimal.h"
#include "EDecoratorIsObjFocusedFilter.generated.h"

UENUM()
enum class EDecoratorIsObjFocusedFilter : uint8 {
    Self,
    SelfNearest,
};

