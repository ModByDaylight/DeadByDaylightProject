#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "AbsorbBloodOrbsInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew)
class THEONI_API UAbsorbBloodOrbsInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(const ADBDPlayer* player);
    
    UAbsorbBloodOrbsInteraction();
};

