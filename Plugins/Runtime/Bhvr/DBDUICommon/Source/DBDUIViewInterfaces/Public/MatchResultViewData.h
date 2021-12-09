#pragma once
#include "CoreMinimal.h"
#include "EGameState.h"
#include "EKillerResult.h"
#include "MatchResultViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FMatchResultViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSlasher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGameState SurvivorResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKillerResult KillerResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    FMatchResultViewData();
};

