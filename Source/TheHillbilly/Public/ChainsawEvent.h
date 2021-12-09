#pragma once
#include "CoreMinimal.h"
#include "ChainsawEvent.generated.h"

USTRUCT()
struct THEHILLBILLY_API FChainsawEvent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float ElapsedMatchTime;
    
    FChainsawEvent();
};

