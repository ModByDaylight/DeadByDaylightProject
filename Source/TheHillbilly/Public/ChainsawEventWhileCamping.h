#pragma once
#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawEventWhileCamping.generated.h"

USTRUCT(BlueprintType)
struct THEHILLBILLY_API FChainsawEventWhileCamping : public FChainsawEvent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float DistanceFromClosestHook;
    
    FChainsawEventWhileCamping();
};

