#pragma once
#include "CoreMinimal.h"
#include "ThrowInteraction.h"
#include "DBDTunableRowHandle.h"
#include "HatchetThrow.generated.h"

class ATheHuntressPower;

UCLASS(EditInlineNew)
class UHatchetThrow : public UThrowInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetThrowCancellationCooldown;
    
    UFUNCTION(BlueprintPure)
    ATheHuntressPower* GetOwningHatchetSpawner() const;
    
public:
    UHatchetThrow();
};

