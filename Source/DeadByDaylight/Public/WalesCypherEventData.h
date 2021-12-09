#pragma once
#include "CoreMinimal.h"
#include "WalesCypherEventData.generated.h"

USTRUCT()
struct FWalesCypherEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString EnteredSequence;
    
    UPROPERTY(Transient)
    FString ExpectedSequence;
    
    UPROPERTY(Transient)
    int32 TimeoutThreshold;
    
    UPROPERTY(Transient)
    bool Success;
    
    UPROPERTY(Transient)
    bool Timeout;
    
    UPROPERTY(Transient)
    bool CharmGranted;
    
    UPROPERTY(Transient)
    int32 ValidCharacterSelcted;
    
    DEADBYDAYLIGHT_API FWalesCypherEventData();
};

