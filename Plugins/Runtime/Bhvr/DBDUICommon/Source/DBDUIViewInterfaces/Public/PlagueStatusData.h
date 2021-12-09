#pragma once
#include "CoreMinimal.h"
#include "ESicknessLevel.h"
#include "PlagueStatusData.generated.h"

USTRUCT(BlueprintType)
struct FPlagueStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESicknessLevel SicknessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SicknessProgress;
    
    DBDUIVIEWINTERFACES_API FPlagueStatusData();
};

