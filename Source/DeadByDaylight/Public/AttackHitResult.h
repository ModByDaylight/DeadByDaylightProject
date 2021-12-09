#pragma once
#include "CoreMinimal.h"
#include "AttackHitResult.generated.h"

class ADBDPlayer;
class UDBDAttack;

USTRUCT()
struct DEADBYDAYLIGHT_API FAttackHitResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    ADBDPlayer* Attacker;
    
    UPROPERTY()
    ADBDPlayer* Target;
    
    UPROPERTY(Export)
    UDBDAttack* Attack;
    
    UPROPERTY()
    bool IsBasicAttack;
    
    UPROPERTY()
    bool CosmeticOnly;
    
    FAttackHitResult();
};

