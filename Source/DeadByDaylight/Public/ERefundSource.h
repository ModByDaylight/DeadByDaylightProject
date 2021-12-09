#pragma once
#include "CoreMinimal.h"
#include "ERefundSource.generated.h"

UENUM()
enum class ERefundSource : uint8 {
    None,
    BloodMarket,
    DailyCalendar,
    PromoPack,
    Count,
};

