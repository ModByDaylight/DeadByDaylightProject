#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BaseStalkModeInteraction.generated.h"

class UStalkerComponent;

UCLASS(EditInlineNew)
class UBaseStalkModeInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintPure)
    UStalkerComponent* GetStalkerComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStalk() const;
    
public:
    UBaseStalkModeInteraction();
};

