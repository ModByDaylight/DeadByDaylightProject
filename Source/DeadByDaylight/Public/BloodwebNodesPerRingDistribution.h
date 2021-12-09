#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebNodesPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodesPerRingDistribution : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    DEADBYDAYLIGHT_API FBloodwebNodesPerRingDistribution();
};

