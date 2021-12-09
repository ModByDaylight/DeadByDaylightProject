#pragma once
#include "CoreMinimal.h"
#include "BaseStalkModeInteraction.h"
#include "GhostChargeStalkModeInteraction.generated.h"

class UGhostStealthComponent;

UCLASS(EditInlineNew)
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintPure)
    UGhostStealthComponent* GetStealthComponent() const;
    
public:
    UGhostChargeStalkModeInteraction();
};

