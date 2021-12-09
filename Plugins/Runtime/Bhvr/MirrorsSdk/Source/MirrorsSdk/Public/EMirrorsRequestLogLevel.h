#pragma once
#include "CoreMinimal.h"
#include "EMirrorsRequestLogLevel.generated.h"

UENUM()
enum class EMirrorsRequestLogLevel {
    None,
    NetworkError,
    HttpError,
    All,
};

