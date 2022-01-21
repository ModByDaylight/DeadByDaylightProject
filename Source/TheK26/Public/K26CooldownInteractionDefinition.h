#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "TunableStat.h"
#include "K26CooldownInteractionDefinition.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26CooldownInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTunableStat _cooldownTime;
    
public:
    UK26CooldownInteractionDefinition();
protected:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
};

