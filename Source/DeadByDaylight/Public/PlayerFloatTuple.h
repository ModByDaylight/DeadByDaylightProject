#pragma once
#include "CoreMinimal.h"
#include "PlayerFloatTuple.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FPlayerFloatTuple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ACharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    DEADBYDAYLIGHT_API FPlayerFloatTuple();
};

