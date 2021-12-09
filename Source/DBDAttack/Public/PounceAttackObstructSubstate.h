#pragma once
#include "CoreMinimal.h"
#include "DBDAttackObstructSubstate.h"
#include "PounceAttackObstructSubstate.generated.h"

UCLASS()
class DBDATTACK_API UPounceAttackObstructSubstate : public UDBDAttackObstructSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName _fullObstructMontage;
    
public:
    UPounceAttackObstructSubstate();
};

