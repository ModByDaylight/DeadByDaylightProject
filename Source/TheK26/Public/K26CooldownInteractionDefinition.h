#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "TunableStat.h"
#include "K26CooldownInteractionDefinition.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew)
class UK26CooldownInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTunableStat _cooldownTime;
    
protected:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
public:
    UK26CooldownInteractionDefinition();
};

