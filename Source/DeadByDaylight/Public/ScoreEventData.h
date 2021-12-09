#pragma once
#include "CoreMinimal.h"
#include "ScoreEventData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FScoreEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float PercentToAward;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UObject* CustomObjectParameter;
    
    DEADBYDAYLIGHT_API FScoreEventData();
};

