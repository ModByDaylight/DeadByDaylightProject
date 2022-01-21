#pragma once
#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "IsOutRangeOfOriginatingPlayer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsOutRangeOfOriginatingPlayer : public URangeBasedCondition {
    GENERATED_BODY()
public:
    UIsOutRangeOfOriginatingPlayer();
private:
    UFUNCTION()
    void OnInRangeChanged(const bool inRange);
    
};

