#pragma once
#include "CoreMinimal.h"
#include "PowerViewData.h"
#include "AddonViewData.h"
#include "PowerBundleViewData.generated.h"

USTRUCT(BlueprintType)
struct FPowerBundleViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerViewData Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAddonViewData Addon1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAddonViewData Addon2;
    
    DBDUIVIEWINTERFACES_API FPowerBundleViewData();
};

