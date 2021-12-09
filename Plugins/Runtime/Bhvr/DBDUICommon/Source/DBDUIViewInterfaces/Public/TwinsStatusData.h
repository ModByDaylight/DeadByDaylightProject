#pragma once
#include "CoreMinimal.h"
#include "TwinsStatusData.generated.h"

USTRUCT(BlueprintType)
struct FTwinsStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TwinsActive;
    
    DBDUIVIEWINTERFACES_API FTwinsStatusData();
};

