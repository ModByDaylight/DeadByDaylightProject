#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "EPalletSide.h"
#include "PalletPullUpInteraction.generated.h"

class APallet;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UPalletPullUpInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalletSide _side;
    
private:
    UPROPERTY(Transient)
    APallet* _owningPallet;
    
public:
    UPalletPullUpInteraction();
};

