#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "GeneratorRepairInteraction.generated.h"

class AGenerator;

UCLASS(EditInlineNew)
class UGeneratorRepairInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    FDBDTunableRowHandle _penaltyPerRepairPlayerCount[3];
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsObstructed(bool obstructed);
    
protected:
    UFUNCTION(BlueprintPure)
    AGenerator* GetOwningGenerator() const;
    
public:
    UGeneratorRepairInteraction();
};

