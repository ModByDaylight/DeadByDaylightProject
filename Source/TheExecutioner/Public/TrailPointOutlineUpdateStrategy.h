#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "DBDTunableRowHandle.h"
#include "TrailPointOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew)
class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentTrailRevealDistance;
    
public:
    UTrailPointOutlineUpdateStrategy();
};

