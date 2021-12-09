#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "HealInteraction.generated.h"

class AActor;
class ACamperPlayer;

UCLASS(EditInlineNew)
class DBDINTERACTION_API UHealInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetTargetSurvivor() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
public:
    UHealInteraction();
};

