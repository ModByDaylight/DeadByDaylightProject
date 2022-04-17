#pragma once
#include "CoreMinimal.h"
#include "ChargeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FChargeData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* Instigator;
    
    UPROPERTY(Transient)
    float ChargeAmount;
    
    UPROPERTY(Transient)
    bool BypassSkillCheckFail;
    
    UPROPERTY(Transient)
    bool IsOneTimeIncrease;
    
    DEADBYDAYLIGHT_API FChargeData();
};

