#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "CrownPillarOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCrownPillarOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _offeringEnabledAuraColor;
    
public:
    UCrownPillarOutlineUpdateStrategy();
};

