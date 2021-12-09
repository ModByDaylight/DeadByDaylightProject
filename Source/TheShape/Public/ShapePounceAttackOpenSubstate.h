#pragma once
#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "DBDTunableRowHandle.h"
#include "ShapePounceAttackOpenSubstate.generated.h"

UCLASS()
class THESHAPE_API UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDBDTunableRowHandle> _tierDurations;
    
public:
    UShapePounceAttackOpenSubstate();
};

