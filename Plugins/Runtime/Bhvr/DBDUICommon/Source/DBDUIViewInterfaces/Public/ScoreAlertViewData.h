#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreCategory.h"
#include "ScoreAlertViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FScoreAlertViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDBDScoreCategory ScoreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScoreValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Progress;
    
    FScoreAlertViewData();
};

