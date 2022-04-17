#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ItemAddon.h"
#include "PrisonChainAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPrisonChainAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxTensionCharge;
    
    UPROPERTY(EditDefaultsOnly)
    float _tensionChargeModifier;
    
public:
    UPrisonChainAddon();
};

