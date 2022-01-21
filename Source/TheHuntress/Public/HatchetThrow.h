#pragma once
#include "CoreMinimal.h"
#include "ThrowInteraction.h"
#include "DBDTunableRowHandle.h"
#include "HatchetThrow.generated.h"

class ATheHuntressPower;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHatchetThrow : public UThrowInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetThrowCancellationCooldown;
    
public:
    UHatchetThrow();
protected:
    UFUNCTION(BlueprintPure)
    ATheHuntressPower* GetOwningHatchetSpawner() const;
    
};

