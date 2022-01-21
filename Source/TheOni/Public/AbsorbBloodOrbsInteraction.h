#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "AbsorbBloodOrbsInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEONI_API UAbsorbBloodOrbsInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UAbsorbBloodOrbsInteraction();
    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(const ADBDPlayer* player);
    
};

