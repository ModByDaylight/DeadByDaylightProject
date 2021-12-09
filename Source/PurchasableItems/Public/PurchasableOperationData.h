#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PurchasableOperationData.generated.h"

USTRUCT()
struct FPurchasableOperationData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Id;
    
    PURCHASABLEITEMS_API FPurchasableOperationData();
};

