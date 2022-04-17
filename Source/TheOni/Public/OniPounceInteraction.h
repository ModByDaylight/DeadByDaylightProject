#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniPounceInteraction.generated.h"

class UOniDemonModeAttackStateComponent;
class UDemonModeComponent;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOniPounceInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UOniDemonModeAttackStateComponent* _chargedAttackState;
    
    UPROPERTY(Export, Transient)
    UDemonModeComponent* _demonModeComponent;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _owningSlasher;
    
public:
    UOniPounceInteraction();
};

