#pragma once
#include "CoreMinimal.h"
#include "ExecutionerStatusData.generated.h"

USTRUCT(BlueprintType)
struct FExecutionerStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgonyProgress;
    
    DBDUIVIEWINTERFACES_API FExecutionerStatusData();
};

