#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BaseStalkModeInteraction.generated.h"

class UStalkerComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBaseStalkModeInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UBaseStalkModeInteraction();
protected:
    UFUNCTION(BlueprintPure)
    UStalkerComponent* GetStalkerComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStalk() const;
    
};

