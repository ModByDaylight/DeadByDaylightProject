#pragma once
#include "CoreMinimal.h"
#include "BlightPowerState.h"
#include "DBDTunableRowHandle.h"
#include "BlightPowerStateAdjusting.generated.h"

UCLASS()
class UBlightPowerStateAdjusting : public UBlightPowerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _adjustRotationOnCollision;
    
    UPROPERTY(EditAnywhere)
    bool _bounceAwayFromCollision;
    
    UPROPERTY(EditAnywhere)
    bool _allowNavigation;
    
    UPROPERTY(EditAnywhere)
    bool _smashBreakables;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxDistanceForSurvivorFacing;
    
public:
    UBlightPowerStateAdjusting();
};

