#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "BloodwebNodeCost.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodeCost : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Cost;
    
    DEADBYDAYLIGHT_API FBloodwebNodeCost();
};

