#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAttackType.h"
#include "DBDAttackUtilities.generated.h"

class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDAttackUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDAttackUtilities();
    UFUNCTION(BlueprintPure)
    static EAttackType GetCurrentAttackType(const AActor* attacker);
    
    UFUNCTION(BlueprintPure)
    static float GetCurrentAttackSubstateRemainingTime(const AActor* attacker);
    
};

