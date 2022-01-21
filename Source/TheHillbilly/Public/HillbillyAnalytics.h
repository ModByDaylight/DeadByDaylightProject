#pragma once
#include "CoreMinimal.h"
#include "ChainsawAnalytics.h"
#include "ChainsawEvent.h"
#include "ChainsawEventWhileCamping.h"
#include "HillbillyAnalytics.generated.h"

USTRUCT()
struct FHillbillyAnalytics : public FChainsawAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FChainsawEvent> OverheatEvents;
    
    UPROPERTY(Transient)
    TArray<FChainsawEvent> OverheatWhileSprintingEvents;
    
    UPROPERTY(Transient)
    TArray<FChainsawEventWhileCamping> OverheatWhileCampingEvents;
    
    UPROPERTY(Transient)
    TArray<FChainsawEvent> RevFromZeroHeatEvents;
    
    THEHILLBILLY_API FHillbillyAnalytics();
};

