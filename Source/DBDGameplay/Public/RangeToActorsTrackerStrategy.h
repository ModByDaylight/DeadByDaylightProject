#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDTunableRowHandle.h"
#include "RangeToActorsTrackerStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class URangeToActorsTrackerStrategy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _range;
    
private:
    UFUNCTION()
    void OnInRangeToTrackedActorsChanged(const bool inRange);
    
public:
    URangeToActorsTrackerStrategy();
};

