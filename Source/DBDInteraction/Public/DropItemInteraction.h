#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DropItemInteraction.generated.h"

class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UDropItemInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UDropItemInteraction();
    UFUNCTION(BlueprintPure)
    ACollectable* GetItem() const;
    
};

