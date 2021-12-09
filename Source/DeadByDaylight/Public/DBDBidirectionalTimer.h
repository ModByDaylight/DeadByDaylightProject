#pragma once
#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "DBDBidirectionalTimer.generated.h"

USTRUCT(BlueprintType)
struct FDBDBidirectionalTimer : public FDBDTimer {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FDBDBidirectionalTimer();
};

