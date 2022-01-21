#pragma once
#include "CoreMinimal.h"
#include "BaseTormentTrailPoint.h"
#include "DBDTunableRowHandle.h"
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
    ATormentAttackTrailPoint();
    UFUNCTION(BlueprintImplementableEvent)
    void DisplayTrailSplineMesh(const USplineComponent* splinemesh, const int32 indexInTrail);
    
};

