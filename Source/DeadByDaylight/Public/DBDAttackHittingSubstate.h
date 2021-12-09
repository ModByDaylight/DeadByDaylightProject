#pragma once
#include "CoreMinimal.h"
#include "DBDAttackSubstate.h"
#include "StatProperty.h"
#include "DBDAttackHittingSubstate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackHittingSubstate : public UDBDAttackSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FStatProperty _hittingPercentDamageBegin;
    
public:
    UDBDAttackHittingSubstate();
};

