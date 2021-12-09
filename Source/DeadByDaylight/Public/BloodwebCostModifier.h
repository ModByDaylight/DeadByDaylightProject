#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EBloodwebNodeContentType.h"
#include "BloodwebCostModifier.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebCostModifier : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBloodwebNodeContentType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CostModifier;
    
    DEADBYDAYLIGHT_API FBloodwebCostModifier();
};

