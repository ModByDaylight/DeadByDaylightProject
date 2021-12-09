#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "DeathBedOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew)
class UDeathBedOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    UDeathBedOutlineUpdateStrategy();
};

