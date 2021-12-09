#pragma once
#include "CoreMinimal.h"
#include "AttackDelegatePair.generated.h"

class UDBDAttack;

USTRUCT(BlueprintType)
struct FAttackDelegatePair {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UDBDAttack* _attack;
    
public:
    DEADBYDAYLIGHT_API FAttackDelegatePair();
};

