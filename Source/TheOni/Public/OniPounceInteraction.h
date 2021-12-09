#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniPounceInteraction.generated.h"

class UDemonModeComponent;
class UOniDemonModeAttackStateComponent;
class ASlasherPlayer;

UCLASS(EditInlineNew)
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

