#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebNodeGate.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodeGate : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FBloodwebNodeGate();
};

