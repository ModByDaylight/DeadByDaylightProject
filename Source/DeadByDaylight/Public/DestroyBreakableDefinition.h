#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DestroyBreakableDefinition.generated.h"

class ABreakableBase;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDestroyBreakableDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _interactionTimePercentForDestroyEvent;
    
private:
    UPROPERTY(Transient)
    ABreakableBase* _breakable;
    
public:
    UDestroyBreakableDefinition();
protected:
    UFUNCTION(BlueprintPure)
    ABreakableBase* GetBreakable() const;
    
};

