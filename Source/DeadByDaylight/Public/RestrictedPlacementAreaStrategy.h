#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "UObject/Object.h"
#include "RestrictedPlacementAreaStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API URestrictedPlacementAreaStrategy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle RestrictedRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxHeightRestriction;
    
public:
    URestrictedPlacementAreaStrategy();
};

