#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIRandomByDistancePercentagesAtTime.generated.h"

USTRUCT(BlueprintType)
struct FAIRandomByDistancePercentagesAtTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAITunableParameter PercentageAtStartDistance;
    
    UPROPERTY(EditAnywhere)
    FAITunableParameter PercentageAtEndDistance;
    
    UPROPERTY(EditAnywhere)
    FAITunableParameter AtRelativeTime;
    
    DBDBOTS_API FAIRandomByDistancePercentagesAtTime();
};

