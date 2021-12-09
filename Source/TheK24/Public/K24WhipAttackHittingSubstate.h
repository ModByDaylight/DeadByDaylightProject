#pragma once
#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K24WhipAttackHittingSubstate.generated.h"

class UCurveFloat;

UCLASS()
class THEK24_API UK24WhipAttackHittingSubstate : public UPounceAttackHittingSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _attackSphereTraceRadius;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _powerAttackBreakObjectLevel;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _powerCanBreakObjectAfterAPlayerDamage;
    
    UPROPERTY(EditAnywhere)
    FVector _whipMovementFromOffset;
    
    UPROPERTY(EditAnywhere)
    FVector _whipMovementToOffset;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _whipMovementCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _lvl3SpeedCurve;
    
    UPROPERTY(EditAnywhere)
    float _whipGroundDetectionOffset;
    
public:
    UK24WhipAttackHittingSubstate();
};

