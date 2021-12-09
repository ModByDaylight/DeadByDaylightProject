#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "ItemAddonInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FItemAddonInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EInventoryItemType InventoryItemType;
    
    UPROPERTY()
    bool AuthorityDataSet;
    
    DEADBYDAYLIGHT_API FItemAddonInitializationData();
};

