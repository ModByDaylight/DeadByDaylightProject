#pragma once
#include "CoreMinimal.h"
#include "BTTask_ExtMoveTo.h"
#include "BTTask_FleeMoveTo.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_FleeMoveTo : public UBTTask_ExtMoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float InScrambleMovementMinDistance;
    
    UPROPERTY(EditInstanceOnly)
    float OutScrambleMovementMinDistance;
    
    UPROPERTY(EditInstanceOnly)
    float InScrambleMovementInterval;
    
    UPROPERTY(EditInstanceOnly)
    float LoopScrambleMovementInterval;
    
    UPROPERTY(EditInstanceOnly)
    float LoopScrambleMovementRandomDeviation;
    
    UPROPERTY(EditInstanceOnly)
    float CrouchWithinLastEvadeLoopPointRadius;
    
    UBTTask_FleeMoveTo();
};

