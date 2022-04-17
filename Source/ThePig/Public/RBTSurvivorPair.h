#pragma once
#include "CoreMinimal.h"
#include "RBTSurvivorPair.generated.h"

class AReverseBearTrap;
class ACamperPlayer;

USTRUCT(BlueprintType)
struct FRBTSurvivorPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AReverseBearTrap* ReverseBearTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ACamperPlayer* Survivor;
    
    THEPIG_API FRBTSurvivorPair();
};

