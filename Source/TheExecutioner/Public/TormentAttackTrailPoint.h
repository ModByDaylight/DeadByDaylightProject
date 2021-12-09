#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "BaseTormentTrailPoint.h"
#include "TormentAttackTrailPoint.generated.h"

class USplineComponent;

UCLASS()
class ATormentAttackTrailPoint : public ABaseTormentTrailPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _attackPointDelayToEnableCollision;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void DisplayTrailSplineMesh(const USplineComponent* splinemesh, const int32 indexInTrail);
    
    ATormentAttackTrailPoint();
};

