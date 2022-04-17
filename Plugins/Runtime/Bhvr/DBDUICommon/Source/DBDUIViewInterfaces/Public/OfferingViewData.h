#pragma once
#include "CoreMinimal.h"
#include "EItemAvailability.h"
#include "BaseLoadoutPartViewData.h"
#include "OfferingViewData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingViewData : public FBaseLoadoutPartViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemAvailability Availability;
    
    DBDUIVIEWINTERFACES_API FOfferingViewData();
};

