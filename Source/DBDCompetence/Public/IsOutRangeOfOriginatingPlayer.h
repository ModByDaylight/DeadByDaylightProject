#pragma once
#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "IsOutRangeOfOriginatingPlayer.generated.h"

UCLASS()
class DBDCOMPETENCE_API UIsOutRangeOfOriginatingPlayer : public URangeBasedCondition {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnInRangeChanged(const bool inRange);
    
public:
    UIsOutRangeOfOriginatingPlayer();
};

