#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DemonModeCooldownInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEONI_API UDemonModeCooldownInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UDemonModeCooldownInteraction();
    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(const ADBDPlayer* owner);
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

