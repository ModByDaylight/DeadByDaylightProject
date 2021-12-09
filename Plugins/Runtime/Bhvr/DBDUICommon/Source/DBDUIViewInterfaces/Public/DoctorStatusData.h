#pragma once
#include "CoreMinimal.h"
#include "EAfflictionLevel.h"
#include "DoctorStatusData.generated.h"

USTRUCT(BlueprintType)
struct FDoctorStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAfflictionLevel AfflictionLevel;
    
    DBDUIVIEWINTERFACES_API FDoctorStatusData();
};

