#pragma once
#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "BlightPowerState.h"
#include "TunableStat.h"
#include "BlightPowerStateDash.generated.h"

class UCurveFloat;

UCLASS()
class UBlightPowerStateDash : public UBlightPowerState, public IViewRotationStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTunableStat _vectorInterpToSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _noDashTimeLimitSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _lookAngleToTurnRateCurveController;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _lookAngleToTurnRateCurveMouse;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _lookAngleToMaxTurnRateCurveMouse;
    
public:
    UBlightPowerStateDash();
    
    // Fix for true pure virtual functions not being implemented
};

