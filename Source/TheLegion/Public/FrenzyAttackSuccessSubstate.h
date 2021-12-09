#pragma once
#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "DBDTunableRowHandle.h"
#include "FrenzyAttackSuccessSubstate.generated.h"

class UCurveFloat;

UCLASS()
class THELEGION_API UFrenzyAttackSuccessSubstate : public UPounceAttackSuccessSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _healthyTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _injuredTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _bleedoutTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _healthyCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _injuredCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _bleedoutCurve;
    
public:
    UFrenzyAttackSuccessSubstate();
};

