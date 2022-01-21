#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "BlessTotem.generated.h"

class ATotem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBlessTotem : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    FDBDTunableRowHandle _blessHexTotemSpeedPenalty;
    
public:
    UBlessTotem();
private:
    UFUNCTION(BlueprintPure)
    ATotem* GetTotem() const;
    
};

