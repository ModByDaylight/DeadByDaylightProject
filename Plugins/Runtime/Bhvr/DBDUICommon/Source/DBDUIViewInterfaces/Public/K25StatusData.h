#pragma once
#include "CoreMinimal.h"
#include "K25StatusData.generated.h"

USTRUCT(BlueprintType)
struct FK25StatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChainHuntProgressPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHoldingLamentConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSolvingLamentConfiguration;
    
    DBDUIVIEWINTERFACES_API FK25StatusData();
};

