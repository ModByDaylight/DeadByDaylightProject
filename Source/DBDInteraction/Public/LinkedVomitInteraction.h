#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "LinkedVomitInteraction.generated.h"

class UVomitStateComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class ULinkedVomitInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool _chargeComplete;
    
public:
    ULinkedVomitInteraction();
protected:
    UFUNCTION(BlueprintPure)
    bool IsVomiting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChargeComplete() const;
    
    UFUNCTION(BlueprintPure)
    UVomitStateComponent* GetVomitStateComponent() const;
    
};

