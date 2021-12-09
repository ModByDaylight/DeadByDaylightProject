#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDAttackOpenSubstate.h"
#include "PounceAttackOpenSubstate.generated.h"

class UPounceAttackOpenSubstateCosmetic;

UCLASS()
class DBDATTACK_API UPounceAttackOpenSubstate : public UDBDAttackOpenSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPounceAttackOpenSubstateCosmetic> _pounceOpenStateCosmeticBlueprintClass;
    
    UPROPERTY(Transient)
    UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintObject;
    
public:
    UPounceAttackOpenSubstate();
};

