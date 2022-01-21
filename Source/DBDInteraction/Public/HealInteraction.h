#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "HealInteraction.generated.h"

class ACamperPlayer;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHealInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UHealInteraction();
protected:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetTargetSurvivor() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
};

