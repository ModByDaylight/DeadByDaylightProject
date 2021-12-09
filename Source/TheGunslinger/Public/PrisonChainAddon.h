#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "PrisonChainAddon.generated.h"

UCLASS()
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

