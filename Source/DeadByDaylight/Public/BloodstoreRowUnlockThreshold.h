#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodstoreRowUnlockThreshold.generated.h"

USTRUCT(BlueprintType)
struct FBloodstoreRowUnlockThreshold : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PreviousRowPurchasedItemsCount;
    
    DEADBYDAYLIGHT_API FBloodstoreRowUnlockThreshold();
};

