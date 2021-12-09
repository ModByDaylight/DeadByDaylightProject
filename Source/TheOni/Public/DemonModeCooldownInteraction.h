#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DemonModeCooldownInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew)
class THEONI_API UDemonModeCooldownInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(const ADBDPlayer* owner);
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UDemonModeCooldownInteraction();
};

