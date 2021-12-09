#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "BlightPowerState.generated.h"

class UCurveFloat;

UCLASS(Abstract, BlueprintType)
class UBlightPowerState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _stateSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _stateDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _cameraPitchRecenterTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _wallDashCollisionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _wallDashCollisionHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _wallDashCollisionRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool _playerCanCancelEarly;
    
    UPROPERTY(EditDefaultsOnly)
    bool _displayCollisionIndicator;
    
public:
    UFUNCTION(BlueprintPure)
    float GetStateDuration() const;
    
    UBlightPowerState();
};

