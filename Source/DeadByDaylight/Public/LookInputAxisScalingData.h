#pragma once
#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "LookInputAxisScalingData.generated.h"

USTRUCT()
struct FLookInputAxisScalingData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FDBDTimer ScalingTimer;
    
    DEADBYDAYLIGHT_API FLookInputAxisScalingData();
};

