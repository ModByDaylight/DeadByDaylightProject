#pragma once
#include "CoreMinimal.h"
#include "StatProperty.h"
#include "UObject/Object.h"
#include "DBDAttackSubstate.generated.h"

class UCurveFloat;

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackSubstate : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FStatProperty _duration;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _speedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FName _montage;
    
    UPROPERTY(Transient)
    UCurveFloat* _currentCurve;
    
public:
    UDBDAttackSubstate();
};

