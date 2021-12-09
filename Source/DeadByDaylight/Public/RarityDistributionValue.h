#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "RarityDistributionValue.generated.h"

USTRUCT(BlueprintType)
struct FRarityDistributionValue : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRing;
    
    DEADBYDAYLIGHT_API FRarityDistributionValue();
};

