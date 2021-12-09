#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "BlessTotem.generated.h"

class ATotem;

UCLASS(EditInlineNew)
class UBlessTotem : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    FDBDTunableRowHandle _blessHexTotemSpeedPenalty;
    
    UFUNCTION(BlueprintPure)
    ATotem* GetTotem() const;
    
public:
    UBlessTotem();
};

