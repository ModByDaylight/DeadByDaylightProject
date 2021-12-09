#pragma once
#include "CoreMinimal.h"
#include "OutOfOrderEnum.generated.h"

UENUM()
enum class OutOfOrderEnum {
    Value1 = 0x2,
    Value2 = 0x0,
    Value3,
    OutOfOrderEnum_MAX = 0x3,
};

