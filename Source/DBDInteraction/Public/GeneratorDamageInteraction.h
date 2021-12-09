#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GeneratorDamageInteraction.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(EditInlineNew)
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void Authority_DamageGenerator(ADBDPlayer* damageBy, AGenerator* generator) const;
    
    UGeneratorDamageInteraction();
};

