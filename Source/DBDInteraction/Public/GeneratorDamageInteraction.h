#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GeneratorDamageInteraction.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UGeneratorDamageInteraction();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void Authority_DamageGenerator(ADBDPlayer* damageBy, AGenerator* generator) const;
    
};

