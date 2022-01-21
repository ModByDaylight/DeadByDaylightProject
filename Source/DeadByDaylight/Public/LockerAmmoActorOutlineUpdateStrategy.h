#pragma once
#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "LockerAmmoActorOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULockerAmmoActorOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    ULockerAmmoActorOutlineUpdateStrategy();
};

