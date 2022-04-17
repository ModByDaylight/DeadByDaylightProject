#pragma once
#include "CoreMinimal.h"
#include "AddonViewData.h"
#include "ItemViewData.h"
#include "ItemBundleViewData.generated.h"

USTRUCT(BlueprintType)
struct FItemBundleViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemViewData Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAddonViewData Addon1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAddonViewData Addon2;
    
    DBDUIVIEWINTERFACES_API FItemBundleViewData();
};

